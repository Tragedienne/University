<?php

session_start();
require_once 'connect_db.php';

$login = filter_var(trim($_POST['login']), FILTER_SANITIZE_STRING);
$pass = filter_var(trim($_POST['pass']), FILTER_SANITIZE_STRING);

$check_user = mysqli_query($connect, "SELECT * FROM `users` 
              WHERE `login` = '$login' AND `pass` = '$pass'");

if(mysqli_num_rows($check_user) > 0){
  $user = mysqli_fetch_assoc($check_user);

  $_SESSION['user'] = [
    "id" => $user['id'],
    "login" => $user['login']
  ];

  header('Location: ../test/test.php');

}else{
  $_SESSION['message'] = 'Invalid login or password';
  header('Location: autorization.php');
}

?>
<!--  <pre>
   <?php 
  print_r($check_user);
  print_r($user);
   ?>
 </pre> -->