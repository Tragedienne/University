/*��������� �������� ������� � ����� x.
���� x>0, �� f(x)=1/x.
���� 10<=x<=20, �� f(x)=x^2.
�� ���� ��������� ������� f(x)=1.
��� �� ������� ����� �����, �� ������� �� �������.*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  system("chcp 1251");
  system("cls");

  int k ;
  float x,f;
  
  printf("������� �������� x\n");
  scanf("%f", &x);   
  printf("\n|-----------------------------------|");
  printf("\n|     x     |       f       |   k   |");
  printf("\n|-----------------------------------|");
  if (x < 0)
  {
		f=1/x;
    k=1;
	}
  else
  {
		if (x>=10 && x<=20)
    {
      f=pow(x,2);
      k=2;
	  }
	  else
	  {
      f=1;
      k=3;
    }
  }
  
  printf("\n|%8.2f   |   %12.2f|   %d   |",x,f,k);
  printf("\n|-----------------------------------|\n");

  system("pause");
  return 0;
}
