/* �������� ����������, ������� 7
������ 3.1.��������� � ������� ���������� ������ 1.1.
 ���������� ����� ��������� ������ ��� �������������� ��� ��� ����� � ������, 
� ������ � ����� ����������� ������ ����������� � ������� ����������. */
#include <stdio.h>
#include <windows.h>

int main() {
  int a,b,c,e;
  int *pa,*pb,*pc,*pe;
  pa=&a;
  pb=&b;
  pc=&c;
  pe=&e;
  printf("a = ");
  scanf("%d", pa);
  printf("b = ");
  scanf("%d", pb);
  printf("c = ");
  scanf("%d", pc);
  printf("e = ");
  scanf("%d", pe);
    if ( (*pa==*pb) && (*pc==*pe) && (*pa!=*pc) && (*pa!=*pe) )
      printf("Yes\n");
    else
      printf("No\n");
  system("pause");
  return 0;
}
