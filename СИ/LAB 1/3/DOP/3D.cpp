#include <stdio.h>
#include <windows.h>

int main()
{
  int flag=0,ndo5=0,nposl5=0,ra1=1,ra2=1, ost=0;
  unsigned long n, newn;

  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  scanf("%lu", &n);
  while(n!=0)
  {
  	ost=n%10;
    if(flag==0)
    {
      ndo5 = ndo5+ost*ra1;
      ra1*=10;
    }
    else 
    {
      nposl5=nposl5*10+ost;
      ra2*=10;
    }
    if(ost==5)
    {
      flag=1;
    }
    n/=10;
  }
  newn=ndo5*ra2+nposl5;
  printf("%lu\n", newn);

  system("pause");
  return 0;
}
