/* �������� ����������, � 3.2 ������� 7 
��� ������������� ������ A[N]. ����� ���������� ���������� ���������� ������ 
������ ��������� ������� � ��� ���� �������. �������� ��� �������� �������, 
������� ���������� ��������, �� ��������� ������� �������, ���������� �� 10.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int i,n,r,x,dlin,sdlin,y,a[20];
  do 
  {
    printf("������� ����������� �������(2<=n<=20)\n"); 
    scanf("%d",&n);
  } 
  while (n>20 || n<2);  
  printf("\n������� �������� �������\n");
  for (i=0; i<n; i++)
    scanf ("%d",a+i);
  printf("\n�������� ������\n");
  for (i=0; i<n; i++)
    printf ("%d  ",*(a+i));
  printf("\n");	
  r=*a;
  x=*a;  
  dlin=1;
  sdlin=1;
  for (i=0; i<n-1; i++)
  {
    if(*(a+i)==*(a+i+1)) 
      sdlin++;
    else  
    {
      if (sdlin>=dlin)
      {
        r=x;
        dlin=sdlin;
      }
      sdlin=1;
      x=*(a+i+1);
    }
  }
  if (sdlin>=dlin) 
  {
    dlin=sdlin;
    r=x;
  }
  printf("\n����� ������� ������������������ ����� %d ����� %d\n",r,dlin);  
  
  for(i=0;i<n;i++) 
    if((*(a+i)%r)==0)
    {
       y=*(a+n-1);  
      *(a+i)=y*10;
    }
  printf("\n������ ������� %d, �� ���������, ���������� �� 10\n",r);
  for (i=0; i<n; i++)
    printf ("%d  ",*(a+i));
  printf("\n");
	
  getch();
  return 0;
}

