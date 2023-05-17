<?php

session_start();
require_once 'connect_db.php';

$login = filter_var(trim($_POST['login']), FILTER_SANITIZE_STRING);
$pass = filter_var(trim($_POST['pass']), FILTER_SANITIZE_STRING);

$flag = 0;

if(mb_strlen($login) < 2 || mb_strlen($login) > 80){
    $_SESSION['message_log'] = 'Invalid login length.';
    header('Location: registration.php');
    $flag = $flag + 1;
}

if(mb_strlen($pass) < 8 || mb_strlen($pass) > 32){
    $_SESSION['message_pass'] = 'Invalid password length.';
    header('Location: registration.php');
    $flag = $flag + 1;
}

if($flag === 0){
$pass = md5($pass."qwerty12345");

mysqli_query($connect, "INSERT INTO `general_users` (`id`, `login`, `pass`)
                            VALUES (NULL, '$login', '$pass')");
$_SESSION['message'] = 'Registration was successful';
header('Location: autorization.php');
}

?>
