/*�������� ���������� ������� 7 �5.4
�������� ������� ��� ��������� ��������� ���������� (��� ������ 4.1)
� ����� �� �� ������� main.
���� ������. ������������� ������ ������� �������, ������� ���� ���� �� ��� .
"abbccc"--->"abc". � ����� ������ ��������� ������ "abc"--->abcabcabc"
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
    printf(" ������ �����. �������� ����\n");
    getch();
    return 0;
  }
  while (--argc>0)
  {
    strcpy(s1,argv[i]);
    printf("�������� ������\n");
    puts (s1);
    lishn (s1);
    printf("������ ����� �������� ������������� ������ ��������\n");
    puts(s1);
    i++;
  }

  getch();
  return 0;
}


