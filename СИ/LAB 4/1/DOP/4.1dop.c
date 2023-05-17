/* Дана строка, найти сколько в ней вместе маленьких латинских букв ab. Последнее вхождение ab заменить на +++++*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<string.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i=0,k=0,ind=-1,j;
  char s[80];
  
  printf("Введите строку\n");
  gets (s);
  
  printf("\nВведеная строка\n");
  puts (s);
  printf("\n");
  
  while ( s[i]!='\0' )
  {
    if(s[i]=='a' && s[i+1]=='b') 
    {
      k++;
      ind = i;
    }
    i++;
  }
  printf("\nКоличество 'ab' в строке k = %d\n",k);
  
  if (ind>=0) 
  {
    for(j=i;j>ind+1;j--) 
      s[j+3]=s[j];
    for(j=ind;j<ind+1;j++)
      s[j]='+';
    for (j=ind+1; s[j]; j++)
      s[j]=s[j+1];
  } 
 	
  puts(s);
 	
  getch();
  return 0;
}

  
