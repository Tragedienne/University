/*Создайте динамически одномерный массив. Количество элементов задается пользователем. 
Массив введите с клавиатуры и выведете на экран. Очистите память.
  Написать функцию, считающую количество нулевых элементов с нечетным индексом*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include<string.h>

int kol(int n, int *a){
	int i, k=0;
	for (i=1; i<n; i+=2)
	  if(a[i]==0)
	    k++;
	return k;
}
int main(){
  int *a, i, n,k,d;
  printf("Vvedite kol-vo elementov massiva: \n");
  scanf("%d", &n);
  a = (int*)malloc(n * sizeof(int));
  printf("Vvedite elemti massiva: \n");
  for (i = 0; i<n; i++)
    scanf("%d", &a[i]);
  printf("Elementi massiva: \n");
  for (i = 0; i<n; i++)
    printf("%d ", a[i]);
  printf("\n");
  d=kol(n,a);
  printf("%d",d);
  free(a);
  getch();
  return 0;  
}
