/* Губанова Александра,вариант 16 №2
Описать класс, содержащий информацию о услугах ЖКХ.В классе не должно быть
методов. Все переменные - члены класса должны быть открытыми (public). В классе
должны быть как символьные, так и числовые поля.
В функции main() выполнить следующие действия: описать объект класса, создать
объект класса, описать массив объектов класса, создать массив объектов класса.
После описания или создания объектов выполнить заполнение их с клавиатуры и
вывод на экран.

Переработать класс из лабораторной работы №2, сделав все переменные - члены класса частными (private) и добавив в класс следующие методы:
1)	установки значений отдельных переменных класса (отдельные методы для каж-дой переменной);
2)	получения значений отдельных переменных класса (отдельные методы для каждой переменной);
3)	отображения на экране содержимого объекта класса (обычный вывод с помо-щью функций printf(), puts());
4)	заполнения объекта класса с клавиатуры (обычный ввод с помощью функций scanf(), gets()).
В функции main() продемонстрировать работоспособность всех разработанных ме-тодов для обычного и для динамического объектов.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include "ZKX.h"

int main() {
  char n_usluga[80],n_org[80];
  int n_cena;
  ZKX zkx;
  
  printf("Specifications of ZKX:\n");
  zkx.vvod();
  printf("Specifications:\n");
  zkx.vyvod();
  system("pause");

  printf("New usluga of ZKX:\n");
  gets(n_usluga);
  zkx.set_usluga(n_usluga);
  printf("New usluga:\n");
  puts(zkx.get_usluga());
  system("pause");

  printf("New organization of ZKX:\n");
  gets(n_org);
  zkx.set_org(n_org);
  printf("New organization:%s\n", zkx.get_org());
  system("pause");

  printf("New cena of ZKX:\n");
  scanf("%d", &n_cena);
  zkx.set_cena(n_cena);
  printf("New cena: %d\n", zkx.get_cena());
  system("pause");

  printf("New specifications of ZKX:\n");
  zkx.vyvod();
  system("pause");

  ZKX *pzkx = new ZKX;

  printf("Specifications of ZKX:\n");
  pzkx->vvod();
  printf("Specifications:\n");
  pzkx->vyvod();
  system("pause");

  printf("New usluga of ZKX: ");
  gets(n_usluga);
  pzkx->set_usluga(n_usluga);
  printf("New usluga:\n");
  puts(pzkx->get_usluga());
  system("pause");

  printf("New organization of ZKX: ");
  gets(n_org);
  pzkx->set_org(n_org);
  printf("New usluga:\n");
  puts(pzkx->get_usluga());
  system("pause");

  printf("New cena of ZKX:\n");
  scanf("%d", &n_cena);
  pzkx->set_cena(n_cena);
  printf("New cena: %d\n",pzkx->get_cena());
  system("pause");

  printf("New specifications of ZKX:\n");
  pzkx->vyvod();
  delete pzkx;

  system("pause");
  return 0;
}
