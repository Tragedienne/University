/*���� �����������: ��������� � �������� �������� ���, ������ ���� 1 ������.
��������� ���������� ���� � �����������, ������� ���������� � ������������� �� �����*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i=0,n=0,j=0,start,finish;
  char s[80],s1[10][10];
  
  printf("������� �����������\n"); 
  gets (s);
	printf("\n�������� �����������\n");
  puts (s);
	printf("\n");
	while (s[i]) 
	{
    start=i;
    while (s[i]!=' ' && s[i])
      i++;
    finish=i-1;
    if (s[start]>='0' && s[start]<='9' && s[finish]>='0' && s[finish]<='9')
    {
      j=0;
      while(j+start<=finish)
      {
        s1[n][j]=s[start+j];
        j++;
      }
      s1[n][j]=0;
      n++;
    }
    if(s[i])
    i++;
  }
  for(i=0;i<n;i++)
  puts(s1[i]);  
  
  system("pause");
  return 0;
}




	
