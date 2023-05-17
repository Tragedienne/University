/* Губанова Александра,вариант 16 №2
Описать класс, содержащий информацию о услугах ЖКХ.В классе не должно быть
методов. Все переменные - члены класса должны быть открытыми (public). В классе
должны быть как символьные, так и числовые поля.
В функции main() выполнить следующие действия: описать объект класса, создать
объект класса, описать массив объектов класса, создать массив объектов класса.
После описания или создания объектов выполнить заполнение их с клавиатуры и
вывод на экран.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ZKX.h"

int main() {
  ZKX zkx;
  printf("Name of usluga:\n");
  scanf("%s", zkx.usluga);
  printf("Name of zavedyshchi:\n");
  scanf("%s", zkx.zav_name);
  printf("Stoimost:\n");
  scanf("%d", &zkx.cena);
  printf("Usluga: %s\n", zkx.usluga);
  printf("Zavedyshchi: %s\n", zkx.zav_name);
  printf("Stoimost: %d\n", zkx.cena);
  printf("\n");

  ZKX *pzkx = new ZKX;
  printf("Name of usluga:\n");
  scanf("%s", pzkx->usluga);
  printf("Name of zavedyshchi:\n");
  scanf("%s", pzkx->zav_name);
  printf("Stoimost:\n");
  scanf("%d", &pzkx->cena);
  printf("Usluga: %s\n", pzkx->usluga);
  printf("Zavedyshchi: %s\n", pzkx->zav_name);
  printf("Stoimost: %d\n", pzkx->cena);
  printf("\n");
  delete pzkx;


  int i,n;
  ZKX z[10];
  printf("N: \n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("Name of usluga: \n");
    scanf("%s", z[i].usluga);
    printf("Name of zavedyshchi: \n");
    scanf("%s", z[i].zav_name);
    printf("Stoimost: \n");
    scanf("%d", &z[i].cena);
  }
  for (i = 0; i < n; i++) {
    printf("Usluga: %s\n", z[i].usluga);
    printf("Zavedyshchi: %s\n", z[i].zav_name);
    printf("Cena: %d\n",z[i].cena);
  }
  printf("\n");

  printf("N:\n");
  scanf("%d", &n);
  ZKX *z1 = new ZKX[n];
  for (i = 0; i < n; i++) {
    printf("Name of usluga:\n");
    scanf("%s", z1[i].usluga);
    printf("Name of zavedyshchi:\n");
    scanf("%s", z1[i].zav_name);
    printf("Stoimost: \n");
    scanf("%d", &z1[i].cena);
  }
  for (i = 0; i < n; i++) {
    printf("Usluga:%s\n", z1[i].usluga);
    printf("Zavedyshchi:%s\n", z1[i].zav_name);
    printf("Cena:%d\n",z1[i].cena);
  }
  delete []z1;

  system("PAUSE");
  return 0;
}
