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
  <title>Authorization</title>
</head>
<body>
      <!--Форма авторизации-->
      <form action="auth.php" method="post">
          <h2 style="text-center" class="txt">AUTHORIZATION</h2>
          <?php
            if($_SESSION['message']){
              echo '<p class="msg"> ' . $_SESSION['message'] . ' </p>';
            }
            unset($_SESSION['message']);
          ?>
          <label>Login</label>
          <input type="text" name="login" placeholder="Enter your login(2-80)...">
          <label>Password</label>
          <input type="password" name="pass" placeholder="Enter your password(8-80)...">
          <button type="submit">Log in</button>

      </form>

</body>
</html>