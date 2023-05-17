/* Губанова Александра, вариант 7
Дан целочисленный массив A[N]. Найти наибольшее количество одинаковых идущих 
подряд элементов массива и сам этот элемент. Заменить все элементы массива, 
кратные найденному элементу, на последний элемент массива, умноженный на 10.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int i,n,r,x,dlin,sdlin,a[20];
  do 
  {
    printf("Введите размерность массива(2<=n<=20)\n"); 
    scanf("%d",&n);
  } 
  while (n>20 || n<2);  
  printf("\nВведите элементы массива\n");
  for (i=0; i<n; i++)
    scanf ("%d",&a[i]);
  printf("\nВведённый массив\n");
  for (i=0; i<n; i++)
    printf ("%d  ",a[i]);
  printf("\n");	
  r=a[0];
  x=a[0];
  dlin=1;
  sdlin=1;
  for (i=0; i<n-1; i++)
  {
    if(a[i]==a[i+1]) 
      sdlin++;
    else  
    {
      if (sdlin>=dlin)
      {
        r=x;
        dlin=sdlin;
      }
      sdlin=1;
      x=a[i+1];
    }
  }
  if (sdlin>=dlin) 
  {
    dlin=sdlin;
    r=x;
  }
  printf("\nСамая длинная последовательность цифры %d равна %d\n",r,dlin);  
  
  for(i=0;i<n;i++) 
    if((a[i]%r)==0)  
      a[i]=a[n-1]*10;
  printf("\nЗамена кратных %d, на последний, умноженный на 10\n",r);
  for (i=0; i<n; i++)
    printf ("%d  ",a[i]);
  printf("\n");
	
  getch();
  return 0;
}

