/*”далить из массива все нули и продублировать все четные элементы*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  
  int a[20],b[20],n,i,j,nr;
  
  printf("¬ведите размерность массива n\n");
  scanf("%d",&n);
  
  printf("\n¬ведите элементы массива\n");
  for (i=0; i<n; i++)
    scanf("%d",a+i);
    
  printf("\n¬веденный масиив\n");
  for (i=0; i<n; i++)
    printf("%d ",*(a+i));
  printf("\n");
  
  j=0;
  for (i=0; i<n; i++)
  {
    if(*(a+i)!=0) 
    {
      *(b+j)=*(a+i);
      j++;
      if(*(a+i)%2==0) 
      {
        *(b+j)=*(a+i);
        j++;
      }
    }
  }  
  nr=j;
  for (j=0; j<nr; j++)
    printf ("%d  ", *(b+j));
    
  getch();  
  return 0;
}

  
 
