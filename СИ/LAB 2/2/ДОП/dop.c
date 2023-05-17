/*В заданном столбце отсортировать элементы в обратном порядке и вывсти результат на экран.
Затем, если n=m, то отсортировать по убванию главную диагональ*/

#include <stdio.h>
#include <windows.h>


int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i,j,m,n,a[7][5],k=0,p,x;

  printf("Введите количество строк\n");
  scanf("%d",&n);
  printf("Введите количество столбцов\n");
  scanf("%d",&m);
  printf("Введите элементы массива\n");
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
      scanf("%d",&a[i][j]);
  printf("Введите номер заданного столбца\n");
  scanf("%d",&k);  
  for (i=0;i<n/2;i++)
  {
    p=a[i][k-1];
    a[i][k-1]=a[n-1-i][k-1];
    a[n-1-i][k-1]=p;
  } 
  i=0;
  while(i<n)
  {
    j=0;
    while(j<m)
    {
      printf("%3d",a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }   
  printf("\n");  
  if(n==m) 
  {
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
        if(a[i][i]<a[j][j]) 
        {
          x=a[i][i];
          a[i][i]=a[j][j];
          a[j][j]=x;
        }
  }
  i=0;
  while(i<n)
  {
    j=0;
    while(j<m)
    {
      printf("%3d",a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\n");
  
  system("pause");
  return 0;
}
