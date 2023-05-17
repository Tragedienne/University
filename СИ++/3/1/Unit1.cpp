/* �������� ����������,������� 16 �2
������� �����, ���������� ���������� � ������� ���.� ������ �� ������ ����
�������. ��� ���������� - ����� ������ ������ ���� ��������� (public). � ������
������ ���� ��� ����������, ��� � �������� ����.
� ������� main() ��������� ��������� ��������: ������� ������ ������, �������
������ ������, ������� ������ �������� ������, ������� ������ �������� ������.
����� �������� ��� �������� �������� ��������� ���������� �� � ���������� �
����� �� �����.

������������ ����� �� ������������ ������ �2, ������ ��� ���������� - ����� ������ �������� (private) � ������� � ����� ��������� ������:
1)	��������� �������� ��������� ���������� ������ (��������� ������ ��� ���-��� ����������);
2)	��������� �������� ��������� ���������� ������ (��������� ������ ��� ������ ����������);
3)	����������� �� ������ ����������� ������� ������ (������� ����� � ����-��� ������� printf(), puts());
4)	���������� ������� ������ � ���������� (������� ���� � ������� ������� scanf(), gets()).
� ������� main() ������������������ ����������������� ���� ������������� ��-����� ��� �������� � ��� ������������� ��������.*/

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
