/* �������� ����������, � 1.2 ������� 4
���� ������. ����� � ������ ������� ������� � ���������� ��������, �����, ��� ����� � ������ �� ��� ����� �����.
��� ������ (� ������ ������) ������ ���� ��������� ����������� � ������� ��������� new.
������������ ���� � ����������� ������� ������ ������. ��� ��������� ������� ������� ������ ���� �����������.
����� ������������ ������� ��� ������ �� ��������.

���� ������. ����� � ������ ������� ������� � ���������� ��������, �����, ��� ����� � ������ �� ��� ����� �����. */

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int pos(char *s, int *ans1, int *ans2) {
  int i=0,k,p1,p2,p;
  k= strlen(s);
  if (k>=3) {
    while(i+2<k) {
      if((s[i]>='0' && s[i]<='9')  && (s[i+2]>='0' && s[i+2]<='9')) {
        p1=i+2;
        *ans1=p1;
        break;
      }
      p=0;
      i++;
    }
    i=k;
    while(i+2>0) {
      if((s[i]>='0' && s[i]<='9')  && (s[i-2]>='0' && s[i-2]<='9')) {
        p2=i;
        *ans2=p2;
        break;
      }
      i--;
    }

   
  }
  return p;
}

int main () {
  char *s=new char[100];
  int p,p2,p1, ans1,ans2;

  printf("Vvedite predlozhenie\n");
  gets (s);
  printf("\nVvedennoe predlozhenie\n");
  puts (s);
  printf("\n");
  p=pos(s, &ans1, &ans2);
  printf("%d %d",ans1,ans2);
  delete []s;
}



