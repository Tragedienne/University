/* �������� ����������, ������� 7
������ 1.4. ��������� ���� for, ������� ������� �������� ������� f(x)
� ���������� u � ��������� �� ������� ������ ����� ����� � n �������������� �
���������� �������������� ������ �� ������� [a; b].
���������� �������� ������������ ��� ��������, ��� � ������������� ������.
*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  system("chcp 1251");
  system("cls");

  int n,t=0,k ;
  float a,b,h,x,f,u;

  printf("������� ������� [a,b] ��� x  � ���������� ����� n, � ��������� u\n");
  scanf("%f %f %d %f", &a, &b, &n, &u);
  if (n < 2)
    n = 10;
  if (a == b)
  {
    a -= 0.5;
    b += 0.5;
  }
  else 
    if (a > b)
    {
      x = a;
      a = b;
      b = x;
    }
  h=(b-a)/n;
  printf("\n|-----------------------------------|");
  printf("\n|     x     |       f       |   k   |");
  printf("\n|-----------------------------------|");
  for (x=a; x<=b+h/2; x+=h)
  {
    t=0;
    if (abs(x) < 3)
    {
           if (u>=x*x)
      {
        f=sqrt(u-x*x);
        k=1;
      }
      else
      {
        k=1;
        t=1;
      }
    }
    else 
      if ((x>=-10) && (x<=-5))
      {
        f=exp(x)*pow(x,6);
        k=2;
      }
      else
      {
        f = sin(log(fabs(x)));
        k = 3;
      }
    if (t==1)
      printf("\n|%8.4f   |  �� ����������|   %d   |",x,k);
    else
      printf("\n|%8.4f   |   %12.4f|   %d   |",x,f,k);
  }
  printf("\n|-----------------------------------|\n");

  system("pause");
  return 0;
}

