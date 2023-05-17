$(function(){

	$('.test-data').find('div:first').show();

	$('.pagination a').on('click', function(){
		if( $(this).attr('class') == 'nav-active' ) return false;

		var link = $(this).attr('href'); //Ссылка на текст вкладки для показа
		var prevActive = $('.pagination > a.nav-active').attr('href'); //Ссылка на текст пока что активной вкладки

		$('.pagination > a.nav-active').removeClass('nav-active'); //Удаляем класс активной ссылки
		$(this).addClass('nav-active'); //Добавляем класс активной вкладки

		//Скрываем/показываем вопросы
		$(prevActive).fadeOut(100, function(){
			$(link).fadeIn(100); 
		});

		return false;
	});

	$('#btn').click(function(){
		var test = +$('#t-id').text();
		var res = {'test':test};

		$('.question').each(function(){
			var id = $(this).data('id');
			res[id] = $('input[name=question-' + id + ']:checked').val();
		});
		
		$.ajax({
			url: 'test.php',
			type: 'POST',
			data: res,
			success: function(html){
				$('.content').html(html);
			},
			error: function(){
				alert('ERROR');
			}
		});

	});

});