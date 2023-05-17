/* Губанова Александра, вариант 7
Задача 1.2. Найти произведение трехзначных отрицательных, стоящих на нечетных местах. 
Окончание ввода - число кратное 5.*/

#include <stdio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int a,k=0,n=1;
 
  printf("Введите число\n");
  scanf("%d", &a);
  while (a%5!=0)
  { 
    if (a<=-100 && a>=-999 && n%2!=0)
    {
      k=k+a;       
    }
    n++;
    scanf("%d", &a);
  }  
  printf("%d\n",k); 
  
  system("pause");
  return 0;
 }
    
