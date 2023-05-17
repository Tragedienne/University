/*ввести n. ввести массив, вывести массив, n проверять не надо. Все нулевые элементы удалить, 
а отрицательные продублировать,т.е -1,2,-1,0,2 будет -1,-1,2,-1,-1,2*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int i,n,j=0,a[20],b[20],nb=0;
  
  printf("Введите размерность массива\n"); 
  scanf("%d",&n);
  for (i=0; i<n; i++)
    scanf ("%d",&a[i]);  
  j=0;
  for(i=0;i<n;i++) 
  {
    if(a[i]!=0) 
    {
      b[j]=a[i];
      j++;
      if(a[i]<0) 
      {
        b[j]=a[i];
        j++;
      }
    }
  }  
  nb=j;
  for (j=0; j<nb; j++)
    printf ("%d  ", b[j]);
  
  getch();
  return 0;
}
