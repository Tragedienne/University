/*6.1. ��� ��������� ������� ������� ������ ��������� � ������������ � �������� ��������
� ��-������� ��������� ��������: 
1) ������� ����������� ����������, ��������� �� � ���������� � ������� �� �� �����;
2) ����������� ������� ����������� ����������, ��������� �� � ���������� � ������� �� �� �����, 
������� ��������� ����������;
3) ������� ���������� ������ ����������� ����������, ��������� ��� � ����������, �
����-���� ��������� �������� � ������������ 
� �������� �������� (�), ������� �� ����� ���������� ����������; 
4) ������ ����������� �������, ����������� ������� ���������� ������ ����������� ����-������, 
��������� ��� � ����������, ��������� ��������� �������� � ������������ � ����-���� �������� (�), 
������� �� ����� ���������� ����������, ������� ��������� ������. ��� ������� � ��������� 
������� ������������ ��������� (�������� [] ������������ ������).
��� ����� � ���������� � ������ �� ����� ��������� ����������� ���������� ������ ���� ����������� �������. 
��� ����� ����������� ���������� ���������� �������� ��������� ��� ���� �������, 
� ��� ������ - ��������� ����������� ���� �������.
������ - ��������� �������, ��������� ������ - ��������� �������� �� ����������:
1)	���������� ����� (int);
2)	�������� (char[ ]);
3)	����������: �����, ������������������ �����, �������, �������, ��� (int).
� - ������������� ��������� �������� �� ���� ����������, �������� � ���������� ����� �����-����� 
������ ���� ������������� �� �������� ��������; 
� - ����� ���������, �� ������� ��� ����������, � �������� ������� �������� �������� �����, 
����� ������� � ����������� ����������� �����.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct predmet {
  int kol_hour;
  char name[80];
  int otchet;
};

void in(struct predmet *ps) {
  printf("Vvedite kol-vo chasov na izychaemiy predmet: ");
  scanf("%d",&ps->kol_hour);
  printf("Vvedite the name of predmet: ");
  scanf("%s",&ps->name);
  printf("exam- 1, difzach- 2, zach- 3, ref- 4, net- 5  -> ");
  scanf("%d",&ps->otchet);
}
void out(struct predmet ps){
  printf("Kol-vo chasov na izychaemiy predmet: %d\n", ps.kol_hour);
  printf("The name of predmet: %s\n", ps.name);
  printf("Vid otchetnosti: %d\n", ps.otchet);
}

int main() {
  int i,j,nom=-1,n;
  struct predmet p1;
  in(&p1);
  out(p1);
  printf("\n");
    
  struct predmet *p2=(struct predmet*)malloc(sizeof(struct predmet));
    if(!p2){
      printf("No free memory");
      system("pause");   
      return 0;
    }
    in(p2);
    out(*p2);
    free(p2);
    printf("\n");
  
  struct predmet otchetnost[5];
  struct predmet p3;
  printf("Vvedite n:\n");
  scanf("%d", &n);
  for (i=0; i<n; i++) 
    in(otchetnost+i);
  for (i=0; i<n; i++) 
    out(otchetnost[i]);
 
  for (i=0; i<n; i++){
    for (j=i+1; j<n; j++){
      if(((otchetnost+i)->otchet>(otchetnost+j)->otchet) || 
        ((otchetnost + i)->otchet == (otchetnost + j)->otchet && strcmp((otchetnost + i)->name, (otchetnost + j)->name)>0)) {       
        p3=*(otchetnost+i);
        *(otchetnost+i)=*(otchetnost+j);
        *(otchetnost+j)=p3;
      }
    }
  }
  for (i=0; i<n; i++){
    out(otchetnost[i]);
  }
  printf("\n");

  char ch;
    do{
	  printf("Vvedite n: ");
	  scanf("%d", &n);
	}
  while(n < 1);
  predmet *p4 = (predmet*)malloc(sizeof(predmet)*n);
  if (p4 == NULL) {
	printf("No free memory");
	return 0;
  }
  for(i = 0; i < n;i++){
	printf("Vvedite %d predmet: \n", i+1);
	in(p4+i);
  }
  printf("Vvedite bykvy: ");
  fflush(stdin);
  scanf("%c", &ch);
  int min=10000;
  for(i = 0;i < n;i++)
    if(min > (p4+i)->kol_hour && ((p4+i)->otchet)==5 && strchr(((p4 + i)->name ), ch)){
     nom = i;
	 min=(p4+i)->kol_hour;
    }
  if(nom != -1){
	printf("Predmet c net_otchetn c min kol-vom hour s bykvoy %c\n", ch);
	out(*(p4+nom));
	}
  else{
	printf("Net zadannogo nazvania s bykvoy %c\n", ch);
  }
	free(p4);
        
    system("PAUSE");
    return 0;
}
