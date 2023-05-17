/* Губанова Александра Вариант 7 №6.2
Выполнить задачу 2.2, размещая все массивы в программе только динамически.
Условия и ограничения для работы № 6.2
1.	Ввод размерности массива и элементов массива осуществлять в функции main() из текстово-го файла с именем, задаваемом в командной строке.
2.	Для сортировки массива должна быть разработана функция.
3.	Для тестирования подготовить не менее двух входных файлов.
Дан целочисленный массив A[N][M]. Среди столбцов массива, содержащих только 
такие элементы, которые по модую не больше 10, найти столбец  с минимальным 
произведением элементов. Отсортировать найденный столбец массива по возрастанию. */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include<string.h>

void sort(int n,int m,int d,int **a){
  int i,j,k;
 	for (i=0; i<n; i++)
	  for (j=i+1; j<n; j++)
	    if (*(*(a+i)+d)>*(*(a+j)+d))
	    {
          k=*(*(a+i)+d);
          *(*(a+i)+d)=*(*(a+j)+d); 
          *(*(a+j)+d)=k;
        }    
}      
int main (){      
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);  
  
  int i,j,k,n,m,d1,d=-1,fl=0,pr,pr1=0x7FFFFFFF;
  int **a;
  char *name;
  
  FILE *rsd; 
  name=(char *)malloc(20*sizeof(char));
  printf("Введите имя исходного файла: ");
  scanf("%s", name);  
  rsd=fopen(name,"r"); 
  fscanf(rsd,"%d %d",&n,&m); 
  free(name);
  printf ("%d строки, %d столбца\n",n,m);  
  a=(int **) malloc(n*sizeof(int*));
  
  for(i=0; i<n; i++)
    a[i]=(int *)malloc(n*sizeof(int));
 
  for (i=0; i<n; i++){
    for (j=0; j<m; j++)
    {
      fscanf(rsd,"%d",&a[i][j]);
	}
  }
  free(a[j]);
  printf("\nВведённая матрица\n");
  for (i=0; i<n; i++){
    for (j=0; j<m; j++)
      printf ("%5d ",*(*(a+i)+j));
    printf("\n");
  }
  for (j=0; j<m; j++){
 	pr=1; 
    i=0;
 	while ( i<n )
 	  if (fabs(*(*(a+i)+j))<=10) {
        pr*=*(*(a+i)+j); 
        i++;
      } 
 	  else { 
        fl=1; 
        i=n;
      } 
      if (fl==0){
        d=j;
        if (pr1<pr)
          d=d1;
        else { 
          pr1=pr; 
          d1=d;
        }  
      } 
      else 
        fl=0;   
  }
  if(d==-1){
    printf("Все значения по модулю >10\n");
    getch();
    return 0;
  }
  printf("\nСтолбец № %d с минимальным произведением\n",d+1);
  for (i=0; i<n; i++)
    printf ("%d  ",*(*(a+i)+d));
  printf("\n");  
  sort(n,m,d, a);
  printf("\nОтсортированный столбец по возрастанию\n");
  for (i=0; i<n; i++)
    printf ("%d  ",*(*(a+i)+d));
  printf("\n"); 
  getch();
  free(a);
  fclose(rsd);
  return 0;
}

