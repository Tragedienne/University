/* В main вводим 3 числа. Функция должна вычислять сумму, произведение и среднее значение. все дробные и сумма первого и третьего*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

float rez(float a, float b, float c, float *r2, float *r3, float *r4)
{
  *r2= a+b+c;
  *r3= (a+b+c)/3.;
  *r4= a+c;
  return a*b*c;
}

int main (void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251); 

  float a,b,c,r1,r2,r3,r4;
 
  printf("Введите число a =");
  scanf("%f",&a);
  printf("Введите число b =");
  scanf("%f",&b);
  printf("Введите число c =");
  scanf("%f",&c);
  
  r1=rez(a,b,c,&r2,&r3,&r4);  

  printf("%.2f\n",r1);
  printf("%.2f\n",r2);
  printf("%.2f\n",r3);
  printf("%.2f\n",r4);
  
  system("pause");
  return 0;
}



























  
