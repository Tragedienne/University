/* �������� ���������� ������� 16 �6
��� ������, �������������� � ���� ���������� ������������ ������ �5, �������-���� ��������� ��������:
������_��_��������� += ���������_��_������; // �������� ������ � ���������
������_��_��������� += ������ �� ������;   // ������� ����� ������� � ��������
                                          // ����� ������� � ���������
������_��_��������� -= int;              // ������� ������ �� ��������� �� ������
������_��_��������� -= char *;          // ������� ������ �� ��������� �� ������������
������_��_���������[int]               // �������� ��������� �� ������ �� ������
������_��_���������[char *]           // �������� ��������� �� ������ �� ������������
� ������� main() ������������������ ����������������� ���� ������������� ��-����������� ��������*/

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

