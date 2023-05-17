/*Губанова Александра Вариант 7 №5.4dop
Ввести строку с клавиатуры. Написать функцию, которая переставляет части строки
отночительно первого "+"
ab+cd--->cd+ab. Ввести с клавиатуры массив из5 слов, обработать данной функцией каждое слово.
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<string.h>

void per(char *s)
{
  int i=0,flag=-1;
  char s1[80];

  while (s[i++])
    if (s[i]=='+')
    {
      flag=i;
      break;
    }
  strcpy(s1,s+flag+1);
  strcat(s1,"+");
  strncat(s1,s,flag);
  s1[strlen(s)]=0;
  strcpy(s,s1);

}

int main ()
{
  char s1[5][80];
  int i=1;

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  printf("Введите строки\n");
  for (i=0;i<5;i++)
  {
    gets (s1[i]);
    per(s1[i]);
  }
  printf("Строка после перестановки\n");
  for (i=0;i<=4;i++)
    puts(s1[i]);

  getch();
  return 0;
}


