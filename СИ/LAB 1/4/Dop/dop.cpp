/*Вычислить значение функции в точке x.
Если x>0, то f(x)=1/x.
Если 10<=x<=20, то f(x)=x^2.
Во всех остальных случаях f(x)=1.
Так же вывести номер ветки, по которой мы считаем.*/

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
  
  printf("Введите значение x\n");
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
