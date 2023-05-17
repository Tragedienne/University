#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
int c_kontr (float a,float b,float* s_pol)
{
   if((a>0) && (b>0)) *s_pol=2*M_PI*b*(a+b);
   else return 0;
   return 1;
}
float s_poln(float a,float b)
{
 return 2*M_PI*b*(a+b);
}

