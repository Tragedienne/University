/* Губанова Александра, № 1.2 вариант 4
Дана строка. Найти в строке индексы первого и последнего символов, таких, что слева и справа от них стоят цифры.
Все строки (и только строки) должны быть размещены динамически с помощью оператора new.
Разделителем слов в предложении считать только пробел. Все остальные символы считать частью слов предложения.
Можно использовать функции для работы со строками.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void pos(char *s, int &ans1, int &ans2) {
  int k = strlen(s);
  if(k >= 3)
    for(int i = 0;(i + 2 < k) && ((ans1 == -1) || (ans2 == -1));i++){
      if((s[i] >= '0' && s[i] <= '9')  && (s[i + 2] >= '0' && s[i + 2] <= '9') && (ans1 == -1)) {
        ans1 = i + 1;
      }
      if((s[k - i] >= '0' && s[k - i] <= '9')  && (s[k - i - 2] >= '0' && s[k - i - 2] <= '9') && (ans2 == -1)) {
        ans2 = k - i - 1;
      }
    }
}

int main () {
  char *s=new char[100];
  int ans1 = -1,ans2 = -1;

  printf("Vvedite predlozhenie\n");
  gets (s);
  printf("\nVvedennoe predlozhenie\n");
  puts (s);
  printf("\n");
  pos(s, ans1, ans2);
  printf("%d %d\n",ans1,ans2);
  delete []s;
  system("PAUSE");
}


