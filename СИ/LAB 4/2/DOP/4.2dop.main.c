/*���� �����������: ��������� � �������� �������� ���, ������ ���� 1 ������.
1.��������� ���������� ���� � �����������, ������� ���������� � ������������� �� ����� - done
2.����� ������� ���������� �������� � ������ �����������*/

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
  
  printf("������� �����������\n"); 
  gets (s);
  printf("\n�������� �����������\n");
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
  printf("���������� ���� = %d\n", k);
  
  printf("����� ������ ��� �������� = %d\n", i-k+1);
 
  rez=(i-k+1)/(float)k;
  printf("n = %f\n", rez);
  
  system("pause");
  return 0;
}




