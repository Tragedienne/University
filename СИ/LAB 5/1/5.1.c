/* �������� ����������, ������� 7
������ 5.1. �������� ��� ������� ��� ���������� �������� �������� � �� ����� �� ������� main().
������� ������ ����������� �������� �� ������� � ������.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

float s_poln(float a,float b)
{       
  return 2*M_PI*b*(a+b);        
}

int c_kontr (float a,float b,float *s_pol)
{  
   if((a>0) && (b>0)) 
     *s_pol=2*M_PI*b*(a+b);
   else 
     return 0;  
   return 1; 
}
int main (void)
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251); 
  
  float s_pol,h,r ;
 
  printf("������� ������ ��������= \n");
  scanf("%f",&h); 
  printf("������� ������ ��������= \n");
  scanf("%f",&r); 
  
  if ((c_kontr(h,r,&s_pol))==1)
    printf("\������ ����������� �������� = %.4f\n",s_pol);
  printf("\������ ����������� �������� = %.4f\n",s_poln(h,r));
   
  system("pause");
  return 0;
  }

