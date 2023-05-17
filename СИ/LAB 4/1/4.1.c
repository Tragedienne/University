/* Губанова Александра, № 4.1 вариант 7 
Дана строка. Повторяющиеся подряд символы строки удалить, оставив лишь один из них 
("abbcccdee" => "abcde").*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<string.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i=0,k=0;
  char s[80],s1[80];
  
  printf("Введите строку\n");
  gets (s);
  
  printf("\nВведеная строка\n");
  puts (s);
  printf("\n");
  
  while ( s[i]!=0 )
  {
    if(s[i]!=s[i+1]) 
    {
      s1[k]=s[i];
      k++;
    }
    i++;
  }
  s1[k]='\0';
  printf("\nСтрока после удаления повторяющихся подряд символов\n");
  puts (s1);
	
  getch();
  return 0;
}
