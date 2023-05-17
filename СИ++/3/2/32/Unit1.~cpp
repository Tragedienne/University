/* Губанова Александра,вариант 16 №3.2
Доработать класс из лабораторной работы №3.1, добавив в класс:
1)	конструкторы следующих видов:
 	конструктор без параметров, очищающий переменные объекта класса;
 	конструктор, инициализирующий все переменные класса значениями, заданными в качестве параметров;
 	конструктор копирования;
 	конструктор приведения из строки символов, содержащей наименование объекта.Остальные переменные должны быть очищены конструктором;
2)	деструктор (при необходимости).
В функции main() продемонстрировать создание обычных и динамических объектов с использованием всех разработанных конструкторов.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "ZKX.h"

int main() {

  ZKX zkx1;
  zkx1.vyvod();

  ZKX zkx2("Voda","Vodokanal",20);
  zkx2.vyvod();

  ZKX zkx3(zkx2);
  zkx3.vyvod();

  ZKX zkx4("Svet");
  zkx4.vyvod();

  ZKX *pzkx1 = new ZKX();
  pzkx1->vyvod();

  ZKX *pzkx2 = new ZKX("Otoplenie","Oblotopl",10);
  pzkx2->vyvod();

  ZKX pz(pzkx2, zkx2);
  pz.vyvod();

  ZKX *pzkx3 = new ZKX(*pzkx2);
  pzkx3->vyvod();

  ZKX *pzkx4 = new ZKX("Gaz");
  pzkx4->vyvod();

  delete pzkx1;
  delete pzkx2;
  delete pzkx3;
  delete pzkx4;

  system("pause");
  return 0;
}
