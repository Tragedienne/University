/* Губанова Александра, Вариант 7
    Задача 6.3
      Задачу 1.3 оформить в виде двух функций: void f_1() и f_2(), возвращающей
      значение нужного типа.
        Условия и ограничения для работы № 6.3
        1.	Все переменные в программе должны быть переменными-указателями.
            Простые переменные (например, int i;) использовать нельзя.
        2.	Формальные параметры функций могут быть простыми переменными (в
            функции можно передавать значения параметров, а не их адреса).
        3.	Входные данные вводить из файла произвольной структуры, в
            котором каждая строка соответствует одному тесту (если в файле N
            строк, значит в файле N тестов).
        4.	Формат командной строки для запуска exe–модуля:
            task.exe <номер функции (1 или 2)> <имя входного файла>
        5.	В функции main() N раз вызвать функцию с номером, заданным первым
            параметром в командной строке, для исходных данных, находящихся в
            файле с заданным в командной строке именем.
        6.	Результаты работы программы (имя файла, входные и выходные данные
            тестов) вывести в функции main() в текстовый файл произвольного
            формата.
        7.	Для тестирования подготовить не менее двух входных файлов.
      задача 1.3
        Удалить справа подряд идущие четные цbфры в записи числа(2567802 => 2567).
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
 // printf ("Удалены справа идущие подряд четные chisla %lu\n",*a);
  *x = *a;
  free(a);
 }

unsigned int f_2(unsigned int x) {
  unsigned long *a = (unsigned long *)malloc(sizeof(unsigned long));
  *a = x;
  while (*a>0 && *a%2==0) { *a/=10; }
 // printf ("Удалены справа идущие подряд chetnye числа %lu\n",*a);
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
