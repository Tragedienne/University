#include <stdio.h>
#include <windows.h>

int main()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  int i,j,m,n,a[7][5],x;

  printf("¬ведите количество строк\n");
  scanf("%d",&n);
  printf("¬ведите количество столбцов\n");
  scanf("%d",&m);
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
    scanf("%d",&a[i][j]);
  printf("¬веденный массив \n");
  i=0;
  while(i<n)
  {
    j=0;
    while(j<m){
      printf("%3d",a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\n");

  if(n==m) {
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)if(a[i][i]<a[j][j]) {
        x=a[i][i];
        a[i][i]=a[j][j];
        a[j][j]=x;
    }

  }

  i=0;
  while(i<n)
  {
    j=0;
    while(j<m){
      printf("%3d",a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\n");

  if(n==m) {
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)if(a[i][n-i-1]<a[j][n-j-1]) {
        x=a[i][n-i-1];
        a[i][n-1-i]=a[j][n-j-1];
        a[j][n-j-1]=x;
    }

  }

  i=0;
  while(i<n)
  {
    j=0;
    while(j<m){
      printf("%3d",a[i][j]);
      j++;
    }
    printf("\n");
    i++;
  }
  printf("\n");

  return 0;
}
