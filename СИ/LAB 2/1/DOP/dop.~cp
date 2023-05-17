/*ввести n. ввести массив, вывести массив, n проверять не надо. Все нулевые элементы удалить, 
а отрицательные продублировать,т.е -1,2,-1,0,2 будет -1,-1,2,-1,-1,2*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int i,n,j,a[20],b[20],nc;
  
  printf("Введите размерность массива\n"); 
  scanf("%d",&n);
  for (i=0; i<n; i++)
    scanf ("%d",&a[i]);
  nc=n;
  for(i=0;i<n;i++) 
  {
    if(a[i]==0)
      nc--;
    if(a[i]<0)
      nc++;
  }
  j=nc-1;
  for(i=n-1;i>=0;i--) 
  {
    if(a[i]!=0) 
    {
      a[j]=a[i];
      j--;
      if(a[i]<0) 
      {
        a[j]=a[i];
        j--;
      }
    }
  }
  n=nc; 
  for (i=0; i<n; i++)
    printf ("%d  ", a[i]);
   	
  getch();
  return 0;
}

