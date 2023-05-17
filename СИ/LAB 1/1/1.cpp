/* Губанова Александра, вариант 7
Задача 3.1.Выполнить с помощью указателей задачу 1.1.
 Переменные можно описывать только для резервирования под них места в памяти, 
а работа с этими переменными должна выполняться с помощью указателей. */
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
