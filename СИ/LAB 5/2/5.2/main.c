/*
�������� ���������� 7 ������� �5.2
��������� ������ 5.1 � ���� ���� ������ ����������:
���� �������� ���� � �������� main(), ������ � � �������������� ���������.
������� ������ ����������� �������� �� ������� � ������.
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

float s_poln(float a,float b);
int c_kontr (float a,float b,float *s_pol);

int main (int argc, char* argv[])
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  float s_pol,h,r ;

  if (argc!=3)
  {
    printf(" �������� ���������� ����������\n");
    return 0;
  }

  int i=0;
  int point=0;

  if(argv[1][i]=='.')
  {
    printf("�������� �������� h\n");
    return 0;
  }
  while(argv[1][i] && ((argv[1][i]>='0' && argv[1][i]<='9') || (argv[1][i]=='.' && !point)))
  {
    if(argv[1][i]=='.')
      point=1;
    i++;
  }
  if(!argv[1][i])
    h = atof(argv[1]);
  else
  {
    printf("�������� �������� h\n");
    return 0;
  }

  i=0;
  point=0;

  if(argv[2][i]=='.')
  {
    printf("�������� �������� r\n");
    return 0;
  }
  while(argv[2][i] && ((argv[2][i]>='0' && argv[2][i]<='9') || (argv[2][i]=='.' && !point)))
  {
    if(argv[2][i]=='.')
      point=1;
    i++;
  }
  if(!argv[2][i])
  {
    r = atof(argv[2]);
  }
  else
  {
    printf("�������� �������� r\n");
    return 0;
  }

  if ((c_kontr(h,r,&s_pol))==1)
    printf("\������ ����������� �������� = %.4f\n",s_pol);
  printf("\n������ ����������� �������� = %.4f\n",s_poln(h,r));

  system("pause");
  return 0;
}



