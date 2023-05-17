/* Губанова Александра, № 4.2 вариант 7 
Дано предложение. Сформировать массив слов из таких слов предложения, 
которые имеют в своем составе латинскую букву 'a', обрамленную цифрами. */

#include <stdio.h>
#include <conio.h>
#include <windows.h>
int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i=0,j=0,is=0,js, k=0;
  char s1[10][10],s[80];
  
  printf("Введите предложение\n"); 
  gets (s);
	printf("\nВведеное предложение\n");
  puts (s);
	printf("\n");
	
  while ( s[i] && s[i+1] && s[i+2]) 
  {
    js=0;
    if( (s[i]>='0' && s[i]<='9') && (s[i+1]=='a') && (s[i+2]>='0' && s[i+2]<='9'))             
    {
      while (i>=0 && s[i]!=' ') 
        k=i--; 
      while (s[i+1]!=0 && s[i+1]!=' ')
      { 
        s1[is][js]=s[k]; 
        js++; 
        k++; 
        i++;
      }
      s1[is][js]=0; 
      is++;
    }
    i++;      
  } 
  printf("Массив слов, содержащий латинскую букву 'а', обрамленную цифрами\n");
  for (i=0; i<is; i++)
    puts (s1[i]);
    
	getch();
	return 0;
}



    
