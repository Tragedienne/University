<?php  
  session_start();

  if($_SESSION['user']){
    header('Location: ../test/test.php');
  }
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="style.css">
  <title>Registration</title>
</head>
<body>
      <!--Форма регистрации-->
      <form action="reg.php" method="post" enctype="multipart/form-data">
          <h2 class="txt">REGISTRATION</h2>
          <label>Login</label>
          <input type="text" name="login" placeholder="Enter your login(2-80)...">
          <label>Password</label>
          <input type="password" name="pass" placeholder="Enter your password(8-32)...">
          <button type="submit">Sign up</button>
          <p>
                Have you got an account?
                <a href="autorization.php">Autorization</a>
          </p>
          <?php
            if($_SESSION['message_log']){
              echo '<p class="msg"> ' . $_SESSION['message_log'] . ' </p>';
            }
            unset($_SESSION['message_log']);
          ?>
          
          <?php
            if($_SESSION['message_pass']){
              echo '<p class="msg"> ' . $_SESSION['message_pass'] . ' </p>';
            }
            unset($_SESSION['message_pass']);
          ?>

      </form>

</body>
</html>