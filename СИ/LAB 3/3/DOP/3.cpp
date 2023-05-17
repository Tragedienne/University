/*¬вести массив строго a[4][4], последний столбец умножить на 10,
все элементы столбиков под главной диагональю разделить на 2,
главную диагональ отсортировать по возрастанию*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int a[4][4],i,j,x,k,b[4][4];
  int *pa;

  printf("¬ведите элементы массива\n");
  for(i=0; i<4; i++)
  {
    for (j=0; j<4; j++)
      scanf ("%d",*(a+i)+j);
  }
  printf("¬веденный массив\n");
  for(i=0; i<4; i++)
  {
    for (j=0; j<4; j++)
      printf("%4d ",*(*(a+i)+j));
    printf("\n");
  }
  pa=*a+3;
  for(i=0; i<4; i++)
  {
    *pa*=10;
    pa+=4;
  }
  for(i=1; i<=3; i++)
  {
    for(j=0;j<i;j++)
      *(*(a+i)+j)/=2;
  }
  for(i=0; i<4; i++)
    for(j=i+1; j<4; j++)
      if(a[i][i]>a[j][j])
      {
        x=*(*(a+i)+i);
        *(*(a+i)+i)=*(*(a+j)+j);
        *(*(a+j)+j)=x;
      }
  printf("\n");
  for(i=0; i<4; i++)
  {
    for (j=0; j<4; j++)
      printf("%4d ",*(*(a+i)+j));
    printf("\n");
  }

  getch();
  return 0;
}
