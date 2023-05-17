/* �������� ����������, ������� 7 � 2.2
��� ������������� ������ A[N][M]. ����� �������� �������, ���������� ������ 
����� ��������, ������� �� ����� �� ������ 10, ����� �������  � ����������� 
������������� ���������. ������������� ��������� ������� ������� �� �����������.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
         
int main ()
{      
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);  
  
  int i,j,k,n,m,j1,fl,pr,pr1=0x7FFFFFFF,a[3][4];
  do
  {
    printf("������� ���������� ������ ������� (2<=n<=20)\n"); 
    scanf("%d",&n);
  } 
  while (n>20 || n<2); 
  do
  { 
    printf("������� ���������� �������� ������� (2<=m<=20)\n"); 
    scanf("%d",&m);
  }
  while (m>20 || m<2);  
  printf("������� �������� �������\n");
  for (i=0; i<n; i++)
  {
    for (j=0; j<m; j++)
      scanf ("%d",&a[i][j]);
  }
  printf("�������� ������\n");
  for (i=0; i<n; i++)
  {
    for (j=0; j<m; j++)
      printf ("%5d ",a[i][j]);
    printf("\n");
  }   
  for (j=0; j<m; j++)
  {
    pr=1; 
    i=0;
    fl=1;
    while (i<n)
      if (abs(a[i][j])<=10) 
      { 
        pr *= a[i][j]; 
        i++; 
      } 
      else 
      { 
        fl=0;
        break;
      } 
    if (fl==1)
    {
      if (pr1>pr) 
      {
        pr1 = pr;
        j1 = j;
      }
    }
  }    
  printf("\n����� ������� � ����������� ������������� � %d\n",j1);
  for (i=0; i<n; i++)
    printf ("%d  ",a[i][j1]);
  printf("\n"); 	
  for (i=0; i<n; i++)
    for (j=i+1; j<n; j++)
      if (a[i][j1]>a[j][j1])
      {
        k=a[i][j1];
        a[i][j1]=a[j][j1]; 
        a[j][j1]=k;
      }
  printf("��������������� ������ �� �����������\n");
  for (i=0; i<n; i++)
    printf ("%d\n",a[i][j1]);
  printf("\n"); 
	
  getch();
  return 0;
}


