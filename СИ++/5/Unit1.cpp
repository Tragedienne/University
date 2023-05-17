/* �������� ���������� ������� 16 �5
������� �����, ���������� ���������� �������� ������, �������������� � ���� ���������� ������������ ������ �3.2.
���������� ��������� ������ ������� � �������������� ������� ���������� �� ������� ������, �������������� � ���� ���������� ������������ ������ �3.2.
������������� ����� ������ ��������� ��������� ������:
1)	�����������;
2)	����������, ������������ ������� ���������;
3)	���������� �������� � ��������� (�������� ��������� �� ������);
4)	�������� �������� �� ��������� �� ������;
5)	��������� ���������� ��������� � ���������;
6)	��������� ��������� �� ������ ��������� �� ������ �������;
7)	������������ ������� ���� �������� ��������� (��������� - ������ ��������);
8)	���������� �������� ��������� �� ������������;
9)	����������� �� ������ ���� ��������� ���������.
� ������� main() ������������������ ����������������� ���� ������������� ������� ���������.
*/

#include <stdio.h>
#include <windows.h>
#include "ZKX.h"
#include "Collection.h"

int main() {

  Collection col;

  ZKX *pzkx1;

  pzkx1 = new ZKX("Voda", "Vodokanal", 10);

  col.add(pzkx1);

  pzkx1 = new ZKX("Svet", "Oblsvet", 11);
  col.add(pzkx1);

  pzkx1 = new ZKX("Gaz", "Oblgaz", 12);
  col.add(pzkx1);

  pzkx1 = new ZKX("Otoplenie", "Oblotoplenie", 13);
  col.add(pzkx1);

   //DOP
  //int k=col.countS('O');

  /*ZKX *p;
  p = col.getobj(2);
  p->vyvod();*/


    //for(int i=0;i<(col.kol());i++)
    //ZKX *p;
    //p=col.getobj(i);
    //p->vyvod();

  int k = 0;
  int nk = col.kol();
  for (int i = 0; i < nk; i++){
    char *str = (col.getobj(i)->get_usluga());
    int nstr = strlen(str);
    for (int j=0; j < nstr; j++)
      if (str[j] == 'O')
        k++;
    str = (col.getobj(i)->get_org());
    for (int j = 0; j < nstr; j++)
      if (str[j] == 'O')
        k++;
  }
  printf("%d\n", k);


  int j, nom;
  printf("Enter numder of object to delete: ");
  scanf("%d", &j);
  col.del(j);
  col.print();

  j = col.kol();
  printf("Kolichestvo elementov collection = %d\n", j);

  ZKX *zkx;
  printf("Enter number of object dlya polycheniya: ");
  scanf("%d", &nom);
  zkx = col.getobj(nom);
  printf("Polychenniy object:\n");
  zkx->vyvod();

  int i1, i2;
  printf("Enter 2 numbers of object: ");
  scanf("%d %d", &i1, &i2);
  col.swap(i1, i2);
  col.print();

  printf("Otsortirovannaya collection:\n");
  col.sort();
  col.print();

  system("pause");
  return 0;
}
