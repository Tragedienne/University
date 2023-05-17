<?php 
session_start();
include '../general_users/connect_db.php';
ini_set("display_errors", 1);
error_reporting(-1);
require_once 'config.php';
require_once 'functions.php';

  if(!$_SESSION['user']){
    header('Location: ../index.php');
  }
 
if( isset($_POST['test']) ){
	$test = (int)$_POST['test'];
	unset($_POST['test']);
	$result = get_correct_answers($test);
	if( !is_array($result) ) exit('ERROR');
	//Данные теста
	$test_all_data = get_test_data($test);
	//1-массив вопрос/ответы
	//2-правильные ответы
	//3-ответы пользователя
	$test_all_data_result = get_test_data_result($test_all_data, $result, $_POST);
	// print_r($_POST);
	// print_r($result);
	//print_arr ($test_all_data_result);
	echo print_result($test_all_data_result);
	die;
}

//Список тестов
$tests = get_tests();

if ( isset($_GET['test']) ){
	$t_id = (int)$_GET['test'];
	$test_data = get_test_data($t_id);
	if ( is_array($test_data) ){
		$count_q = count($test_data);
		$pagination = pagination($count_q, $test_data);
	}
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Testing system</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>

<div class="profile">
	<h2><?= $_SESSION['user']['login'] ?></h2>
	<a href="../index.php" class="log_out">Main page</a><br>
	<a href="../general_users/log_out.php" class="log_out">Log out</a>	
</div>

	<div class="wrap"> 
		
		<?php if( $tests ): ?>
			<h2>TESTS:</h2>
			<?php foreach($tests as $test): ?>
				<p class="text"><a href="?test=<?=$test['id']?>"><?=$test['test_name']?></a></p>
			<?php endforeach; ?>

			<br><hr><br>
			<div class="content">
				<?php if( isset($test_data) ): ?>

						<p class="text1">Total questions: <?=$count_q?></p><br>
						
						<span class="none" id="t-id"><?=$t_id?></span>

						<div class="test-data">
							<?php foreach($test_data as $id_q => $item): //Получение каждого конкретного вопроса + ответы?>

								<div class="question" data-id="<?=$id_q?>" id="question-<?=$id_q?>">
									
									<?php foreach($item as $id_a => $answer): //Прохождение по массиву вопрос/ответы ?>

										<?php if( !$id_a ): //Выводим вопрос ?>
											<p class="q"><?=$answer?></p>
										<?php else: //$id_a Выводим варианты ответов?>

											<p class="a">
												<input type="radio" id="answer-<?=$id_a?>" name="question-<?=$id_q?>" value="<?=$id_a?>">
												<label for="answer-<?=$id_a?>"><?=$answer?></label>
											</p>

										<?php endif; //$id_a ?>

									<?php endforeach; //$item ?>

								</div> <!--.qiestion-->

							<?php endforeach; //$test_data ?>
						</div> <!--.test-data-->

						<?=$pagination?>

						<div class="buttons">
							<button class="center btn" id="btn">Finish</button>
						</div>

				<?php endif; //isset($test_data) ?>

			</div> <!--.content-->

		<?php else: //$tests ?>
			<h3>No tests.</h3>
		<?php endif; //$tests ?>

	</div> <!-- .wrap -->

<script src="https://code.jquery.com/jquery-latest.js"></script>
<script src="script.js"></script>
</body>
</html>