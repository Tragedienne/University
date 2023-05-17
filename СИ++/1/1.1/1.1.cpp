/* Губанова Александра, вариант 4 
№ 1.1 Дан массив целых чисел A[n][m]. Определить, есть ли в массиве столбец, все эле-менты которого одинаковые.
Разработать программу на языке С, которая состоит из функции main(), выполняю-щей ввод исходных данных и вывод результата, и функции, 
реализующей заданные дей-ствия и вызываемой из функции main().
Все массивы (и только массивы) должны быть размещены динамически с помо-щью оператора new.  
*/
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<io.h>

int func1(int *a[], int n, int m)
{
  int fl = 1;
  int i,j;
  for (j = 0; j < m; j++)
  {
    for (i = 1; i < n; i++)
      if (a[i][j] != a[i-1][j])
        fl = 0; 
    if (fl == 1 )
      break;
  }
  return fl;         
}


int main()
{
  int n,m,**a, fl,i,j;
  printf("n: ");
  scanf("%d",&n);
  printf("m: ");
  scanf("%d", &m);
  a = new int* [n];
  for (int i = 0; i < n; i++)
    a[i] = new int[m];
  printf("Enter array:\n");
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
            
 
  fl = func1(a, n, m);
  if (fl==1)
    printf("yes");
  else
    printf("no");
  printf("\n");
  for (int i = 0; i < n; i++)
    delete[] a[i];
  delete[] a;
  system("PAUSE");
}

