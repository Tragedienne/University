/*Дано предложение: начальных и конечных пробелов нет, меджду слов 1 пробел.
1.Посчитать количество слов в предложении, которые начинаются и заканчиваются на цифру - done
2.Найти среднее количество символов в словах предложения*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i=0,n=0,k=0;
  float rez;
  char s[80];
  
  printf("Введите предложение\n"); 
  gets (s);
  printf("\nВведеное предложение\n");
  puts (s);
  printf("\n");

  while (s[i]) 
  {
    if (s[i] == ' ') 
      i++;
    k++;
    while (s[i] != ' ' && s[i]) 
      i++;
  }
  printf("Количество слов = %d\n", k);
  
  printf("Длина строки без пробелов = %d\n", i-k+1);
 
  rez=(i-k+1)/(float)k;
  printf("n = %f\n", rez);
  
  system("pause");
  return 0;
}




