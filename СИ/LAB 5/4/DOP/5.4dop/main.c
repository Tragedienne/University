/*�������� ���������� ������� 7 �5.4dop
������ ������ � ����������. �������� �������, ������� ������������ ����� ������
������������ ������� "+"
ab+cd--->cd+ab. ������ � ���������� ������ ��5 ����, ���������� ������ �������� ������ �����.
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

  printf("������� ������\n");
  for (i=0;i<5;i++)
  {
    gets (s1[i]);
    per(s1[i]);
  }
  printf("������ ����� ������������\n");
  for (i=0;i<=4;i++)
    puts(s1[i]);

  getch();
  return 0;
}


