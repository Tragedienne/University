/* Губанова Александра Варинат 16 №6
Для класса, разработанного в ходе выполнения лабораторной работы №5, перегру-зить следующие операции:
ссылка_на_коллекцию += указатель_на_объект; // добавить объект в коллекцию
ссылка_на_коллекцию += ссылка на объект;   // создать копию объекта и добавить
                                          // копию объекта в коллекцию
ссылка_на_коллекцию -= int;              // удалить объект из коллекции по номеру
ссылка_на_коллекцию -= char *;          // удалить объект из коллекции по наименованию
ссылка_на_коллекцию[int]               // получить указатель на объект по номеру
ссылка_на_коллекцию[char *]           // получить указатель на объект по наименованию
В функции main() продемонстрировать работоспособность всех разработанных пе-регруженных операций*/

#include <stdio.h>
#include <windows.h>
#include "ZKX.h"
#include "Collection.h"

int main() {

  Collection col;

  ZKX *pzkx1;

  pzkx1 = new ZKX("Voda", "Vodokanal", 10);
  pzkx2 = new ZKX("Svet", "Oblsvet", 11);
  pzkx3 = new ZKX("Gaz", "Oblgaz", 12);
  pzkx4 = new ZKX("Otoplenie", "Oblotoplenie", 13);
  
  col+=pzkx1;
  col+=pzkx2;
  col+=pzkx3;
  col+=pzkx4;
  
  col.print();
  printf("\n");
  system("pause");
  
  col-=2;
  col.print();
  printf("\n");
  system("pause");
  
  col-="Svet";
  col.print();
  printf("\n");
  system("pause");
  
  City *p1 = col[3];
  p1->print();
  printf("\n");
  system("PAUSE");

  City *p2 = col["Voda"];
  p2->print();
  printf("\n");
  system("PAUSE");
  return 0;
}

