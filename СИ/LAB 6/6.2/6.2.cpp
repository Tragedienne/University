/* �������� ���������� ������� 7 �6.2
��������� ������ 2.2, �������� ��� ������� � ��������� ������ �����������.
������� � ����������� ��� ������ � 6.2
1.	���� ����������� ������� � ��������� ������� ������������ � ������� main() �� ��������-�� ����� � ������, ���������� � ��������� ������.
2.	��� ���������� ������� ������ ���� ����������� �������.
3.	��� ������������ ����������� �� ����� ���� ������� ������.
��� ������������� ������ A[N][M]. ����� �������� �������, ���������� ������ 
����� ��������, ������� �� ����� �� ������ 10, ����� �������  � ����������� 
������������� ���������. ������������� ��������� ������� ������� �� �����������. */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include<string.h>

void sort(int n,int m,int d,int **a){
  int i,j,k;
 	for (i=0; i<n; i++)
	  for (j=i+1; j<n; j++)
	    if (*(*(a+i)+d)>*(*(a+j)+d))
	    {
          k=*(*(a+i)+d);
          *(*(a+i)+d)=*(*(a+j)+d); 
          *(*(a+j)+d)=k;
        }    
}      
int main (){      
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);  
  
  int i,j,k,n,m,d1,d=-1,fl=0,pr,pr1=0x7FFFFFFF;
  int **a;
  char *name;
  
  FILE *rsd; 
  name=(char *)malloc(20*sizeof(char));
  printf("������� ��� ��������� �����: ");
  scanf("%s", name);  
  rsd=fopen(name,"r"); 
  fscanf(rsd,"%d %d",&n,&m); 
  free(name);
  printf ("%d ������, %d �������\n",n,m);  
  a=(int **) malloc(n*sizeof(int*));
  
  for(i=0; i<n; i++)
    a[i]=(int *)malloc(n*sizeof(int));
 
  for (i=0; i<n; i++){
    for (j=0; j<m; j++)
    {
      fscanf(rsd,"%d",&a[i][j]);
	}
  }
  free(a[j]);
  printf("\n�������� �������\n");
  for (i=0; i<n; i++){
    for (j=0; j<m; j++)
      printf ("%5d ",*(*(a+i)+j));
    printf("\n");
  }
  for (j=0; j<m; j++){
 	pr=1; 
    i=0;
 	while ( i<n )
 	  if (fabs(*(*(a+i)+j))<=10) {
        pr*=*(*(a+i)+j); 
        i++;
      } 
 	  else { 
        fl=1; 
        i=n;
      } 
      if (fl==0){
        d=j;
        if (pr1<pr)
          d=d1;
        else { 
          pr1=pr; 
          d1=d;
        }  
      } 
      else 
        fl=0;   
  }
  if(d==-1){
    printf("��� �������� �� ������ >10\n");
    getch();
    return 0;
  }
  printf("\n������� � %d � ����������� �������������\n",d+1);
  for (i=0; i<n; i++)
    printf ("%d  ",*(*(a+i)+d));
  printf("\n");  
  sort(n,m,d, a);
  printf("\n��������������� ������� �� �����������\n");
  for (i=0; i<n; i++)
    printf ("%d  ",*(*(a+i)+d));
  printf("\n"); 
  getch();
  free(a);
  fclose(rsd);
  return 0;
}

