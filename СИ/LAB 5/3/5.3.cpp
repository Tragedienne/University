/*�������� ���������� �5_3 ������� 7
�������� ������� ��� ��������� ��������� ���������� (��� ������ 2.1) 
� ����� �� �� ������� main.
��� ������������� ������ A[N]. ����� ���������� ���������� ���������� ������ 
������ ��������� ������� � ��� ���� �������. �������� ��� �������� �������, 
������� ���������� ��������, �� ��������� ������� �������, ���������� �� 10.*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>

void zamena(int n, int *a,  int *r1, int *dlin1) 
{ 
  int r,x,dlin,sdlin,i;
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
  for(i=0;i<n;i++) 
    if((a[i]%r)==0)  
      a[i]=a[n-1]*10;
  *r1=r;
  *dlin1=dlin;
  getch();
}
int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  FILE *rsd, *wsd; 
  int n,i,k=1,r,dlin,a[20], r1, dlin1;
  char name[20];
  
  printf("������� ��� ��������� �����: ");
  scanf("%s", name); 
  rsd=fopen(name,"r"); 
  if (rsd==NULL)
    printf("���� %s �� ������", name); 
  else {
    fscanf(rsd,"%d",&n); 
    printf("n=%d",n);
    getch();
  }
  for (i=0; i<n; i++)
    fscanf(rsd,"%d",&a[i]);
  fclose(rsd);
  printf("\n�������� ������\n");
  for (i=0; i<n; i++)
    printf ("%d  ",a[i]);
  printf("\n");
  printf("������� ��� ��������������� �����: ");
  scanf("%s", name);
  wsd=fopen(name,"w");
  fputs("�������� ������: ", wsd);
  for (i=0; i<n; i++)
    fprintf(wsd," %d ",a[i]);
  zamena(n,a, &r1, &dlin1);  
  fputs("\n������� � ����� ������� �������������������: ", wsd);
  fprintf(wsd,"%d ", r1);
  fputs("\n������ ������ ������������������: ", wsd);
  fprintf(wsd,"%d ", dlin1);
  fputs("\n�������������� ������: ", wsd);
  for (i=0; i<n; i++)
    fprintf(wsd," %d ",a[i]);
  fclose(wsd);           
                 
  system("pause");
  return 0;
}


