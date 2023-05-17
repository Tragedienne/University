/* �������� ����������, ������� 7
    ������ 6.3
      ������ 1.3 �������� � ���� ���� �������: void f_1() � f_2(), ������������
      �������� ������� ����.
        ������� � ����������� ��� ������ � 6.3
        1.	��� ���������� � ��������� ������ ���� �����������-�����������.
            ������� ���������� (��������, int i;) ������������ ������.
        2.	���������� ��������� ������� ����� ���� �������� ����������� (�
            ������� ����� ���������� �������� ����������, � �� �� ������).
        3.	������� ������ ������� �� ����� ������������ ���������, �
            ������� ������ ������ ������������� ������ ����� (���� � ����� N
            �����, ������ � ����� N ������).
        4.	������ ��������� ������ ��� ������� exe�������:
            task.exe <����� ������� (1 ��� 2)> <��� �������� �����>
        5.	� ������� main() N ��� ������� ������� � �������, �������� ������
            ���������� � ��������� ������, ��� �������� ������, ����������� �
            ����� � �������� � ��������� ������ ������.
        6.	���������� ������ ��������� (��� �����, ������� � �������� ������
            ������) ������� � ������� main() � ��������� ���� �������������
            �������.
        7.	��� ������������ ����������� �� ����� ���� ������� ������.
      ������ 1.3
        ������� ������ ������ ������ ������ �b��� � ������ �����(2567802 => 2567).
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void f_1(unsigned int *x){
     
 unsigned long *a = (unsigned long *)malloc(sizeof(unsigned long));
  *a = *x;
  while (*a>0 && *a%2==0) { *a/=10; }
 // printf ("������� ������ ������ ������ ������ chisla %lu\n",*a);
  *x = *a;
  free(a);
 }

unsigned int f_2(unsigned int x) {
  unsigned long *a = (unsigned long *)malloc(sizeof(unsigned long));
  *a = x;
  while (*a>0 && *a%2==0) { *a/=10; }
 // printf ("������� ������ ������ ������ chetnye ����� %lu\n",*a);
  x = *a;
  free(a);
  return x;
}

int main(int argc, char *argv[]) {
    
  if(argc != 3) {
    printf("Nevernoe kol-vo\n");
   	system("PAUSE");
    return 0;
  }
  int *nom = (int *)malloc(sizeof(int));
  *nom = atoi(argv[1]);
   printf("nom= %d\n",*nom);
   
  FILE *fin, *fout;
  char *in = (char *)calloc(80, sizeof(char));
  strcpy(in, argv[2]);
  strcat(in, ".txt");
  printf("name_in= %s\n",in);
  fin = fopen(in, "r");
  printf("argv[2]= %s \n",argv[2]);
  if (!fin) {
    printf("File open error.\n");
    return 0;
  }

  char *out = (char *)calloc(80, sizeof(char));
  printf("Enter output file (f631_1): ");
  gets(out);
 // scanf("%s", *out);
   strcat(out, ".txt");
    printf("name_out= %s\n",out);
   system("PAUSE");
 
 fout = fopen(out, "w");
	if (!fout) {
		printf("Incorrect filename provided!\n");
		fclose(fin);
		system("PAUSE");
		return 0;
	}
  char *stest = (char *)malloc(sizeof(char *));
  unsigned int *test = (unsigned int *)malloc(sizeof(unsigned int));
  fgets(stest, 20, fin); 
    *test = atoi(stest);
    fprintf(fout, "test: %d\n", *test);
    printf("chislo do funkcii %d = %lu\n",*nom,*test);
    if(*nom==1) {
      f_1(test);
    }
    else {
      *test=f_2(*test);
    }
    printf("chislo posle funkcii %d = %lu\n",*nom,*test);
     system("PAUSE");
    fprintf(fout, "ans:  %d\n", *test);
  
 // fclose(*fin);
  
  free(nom);
  free(fin);
  free(fout);
  free(stest);
  free(test);
  printf("\nAll done! You can check your output file '%s'\n", out);
   system("PAUSE");
  free(in);
  free(out);
 
  return 0;
}
