/*Губанова Александра Вариант 7 №5.4
Написать функцию для обработки следующей информации (для задачи 4.1)
и вызов ее из функции main.
Дана строка. Повторяющиеся подряд символы удалить, оставив лишь один из них .
"abbccc"--->"abc". В конец строки дублирует дважды "abc"--->abcabcabc"
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<string.h>

void lishn (char *s)
{
  int i=0,k=0,n=0;
  char s1[180];

  while ( s[i++]!=0)
  {
    if (s[i-1]!=s[i])
      s1[k++]=s[i-1];
  }
  s1[k]=s[i-1];
  strcpy(s,s1);
  for(n=0;n<2;n++)
    strcat(s,s1);
}

int main (int argc, char *argv[])
{
  char s1[180];
  int i=1 ;

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  if (argc==1)
  {
    printf(" Ошибка ввода. Параметр один\n");
    getch();
    return 0;
  }
  while (--argc>0)
  {
    strcpy(s1,argv[i]);
    printf("Введеная строка\n");
    puts (s1);
    lishn (s1);
    printf("Строка после удаления повторяющихся подряд символов\n");
    puts(s1);
    i++;
  }

  getch();
  return 0;
}


