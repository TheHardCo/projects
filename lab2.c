#include<stdio.h>
#include<math.h>
#define EPS 0.0001
int main()
{
  double a, sum, e=1, temp = 0;
  int n;
  sum = 0;
  
   for( n = 2; e > EPS ; n++)
   { 
      a = n /pow(n-1, 2);
      //printf("%e\n",a);
      e = fabs(a - temp);
      temp = a;
      sum +=a;
   }
   
   printf("%lf \t\n",sum);

 return 0;
 }
