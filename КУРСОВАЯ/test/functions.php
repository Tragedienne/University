<?php 

//Распечатка массива
function print_arr($arr){
	echo '<pre>' . print_r($arr, true) . '</pre>';
}

//Получение списка тестов
function get_tests(){
	global $db;
	$query = "SELECT * FROM test WHERE enable = '1'";
	$res = mysqli_query($db, $query);
	if (!$res) return false;
	$data = array();
	while($row = mysqli_fetch_assoc($res)){
		$data[] = $row;
	}
	return $data;
}

//Получение данных теста
function get_test_data($t_id){
	if( !$t_id ) return;
	global $db;
	$query = "SELECT q.question, q.id_test, a.id, a.answer, a.id_question
		FROM questions q
		LEFT JOIN answers a
			ON q.id = a.id_question
        LEFT JOIN test
        	ON test.id = q.id_test
				WHERE q.id_test = $t_id AND test.enable = '1'";
	$res = mysqli_query($db, $query);
	$data = null;
	while($row = mysqli_fetch_assoc($res)){
		if( !$row['id_question'] ) return false;
		$data[$row['id_question']][0] = $row['question'];
		$data[$row['id_question']][$row['id']] = $row['answer'];
	}
	return $data;
}

//Получение id вопрос/ответ
function get_correct_answers($test){
	if( !$test ) return false;
	global $db;
	$query = "SELECT q.id AS quest_id, a.id AS ans_id
		FROM questions q
		LEFT JOIN answers a
			ON q.id = a.id_question
        LEFT JOIN test
        	ON test.id = q.id_test
				WHERE q.id_test = $test AND a.corr_answer = '1' AND test.enable = '1'";
	$res = mysqli_query($db, $query);
	$data = null;
	while ($row = mysqli_fetch_assoc($res)){
		$data[$row['quest_id']] = $row['ans_id'];
	}
	return $data;
}

//Строим пагинацию
function pagination($count_q, $test_data){
	$keys = array_keys($test_data);
	$pagination = '<div class="pagination">';
	for($i = 1; $i <= $count_q; $i++){
		$key = array_shift($keys);
		if( $i == 1 ){
			$pagination .= '<a class="nav-active" href="#question-' . $key . '">' . $i . '</a>';
		}else{
			$pagination .= '<a href="#question-' . $key . '">' . $i . '</a>';
		}
	}
	$pagination .= '</div>';
	return $pagination;
}

//Итоги
	//1-массив вопрос/ответы
	//2-правильные ответы
	//3-ответы пользователя
function get_test_data_result($test_all_data, $result, $_post){
	//Заполняем массив $test_all_data правильными ответами и данными о неотвеченных вопросах
	foreach ($result as $q => $a) {
		$test_all_data[$q]['correct_answer'] = $a;
		//Добавление в массив данные о неотвеченных вопросах
		if( !isset($_post[$q]) ){
			$test_all_data[$q]['incorrect_answer'] = 0;
		}
	}
	//Добавление неверного ответа, если такой был
	foreach($_post as $q => $a){
		//Удалим из _post "левые" значения вопросов
		if( !isset($test_all_data[$q]) ){
			unset($_post[$q]);
			continue;
		}

		//Если есть "левые" значения ответов
		if( !isset($test_all_data[$q][$a]) ){
			$test_all_data[$q]['incorrect_answer'] = 0;
			continue;
		}

		//Добавление неверного ответа
		if( $test_all_data[$q]['correct_answer'] != $a ){
			$test_all_data[$q]['incorrect_answer'] = $a;
		}
	}
	return $test_all_data;
}

//Печать результатов
function print_result($test_all_data_result){
	//Переменные результатов
	$all_count = count($test_all_data_result); //Количество вопросов
	$correct_answer_count = 0; //Количество верных ответов
	$incorrect_answer_count = 0; //Количество неверных ответов
	$percent = 0; //Процент верных ответов

	//Подсчет результатов
	foreach($test_all_data_result as $item){
		if( isset($item['incorrect_answer']) ) $incorrect_answer_count++;
	}
	$correct_answer_count = $all_count - $incorrect_answer_count;
	$percent = round( ($correct_answer_count / $all_count * 100), 2);

	if( $percent < 60 ) return '< 60%. Try one more time';

	//Вывод результатов
	$print_res = '<div class="test-data">';
		$print_res .= '<div class="count-res">';
			$print_res .= "<p>Total questions: <b>{$all_count}</b></p>";
			$print_res .= "<p>Correct: <b>{$correct_answer_count}</b></p>";
			$print_res .= "<p>Incorrect: <b>{$incorrect_answer_count}</b></p>";
			$print_res .= "<p>Percent: <b>{$percent}</b></p>";
		$print_res .= '</div>'; //.count-res

		//Вывод теста
		foreach($test_all_data_result as $id_q => $item){ //Получаем вопрос + ответы
			$correct_answer = $item['correct_answer'];
			$incorrect_answer = null;
			if( isset($item['incorrect_answer']) ){
				$incorrect_answer = $item['incorrect_answer'];
				$class = 'question-res error';
			}else{
				$class = 'question-res ok';
			}
			$print_res .= "<div class='$class'>";
				foreach($item as $id_a => $answer){ //Проходимся по массиву ответов
					if( $id_a === 0 ){
						//Вопрос
						$print_res .= "<p class='q'>$answer</p>";
					}elseif( is_numeric($id_a) ) {
						//Ответ
						if( $id_a == $correct_answer ){
							//Если это верный ответ
							$class = 'a ok2';
						}elseif( $id_a == $incorrect_answer ){
							//Если это неверный ответ
							$class = 'a error2';
						}else{
							$class = 'a';
						}
						$print_res .= "<p class='$class'>$answer</p>";
					}
				}
			$print_res .= '</div>'; //.question-res
		}

	$print_res .='</div>'; //.test-data

	return $print_res;
}