/* �������� ����������, � 4.1 ������� 7 
���� ������. ������������� ������ ������� ������ �������, ������� ���� ���� �� ��� 
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
  
  printf("������� ������\n");
  gets (s);
  
  printf("\n�������� ������\n");
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
  printf("\n������ ����� �������� ������������� ������ ��������\n");
  puts (s1);
	
  getch();
  return 0;
}
