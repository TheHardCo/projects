#include <stdio.h>
#include <math.h>
#define step 0.1
#define EPS 0.0001
#define exp 2.72

int fact(int n)
{
    if(n == 0 || n ==1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
} 

int main(void)
{ 
    double y,x,sumn,sume,SE,SN;
    int n=0;
    
    for(x = step;x < 1;x += step)
    {
        y = pow(exp,2*x);
    
       for(n = 0,SN = 0;n < 20 ; n++)
       {
           sumn = pow(2*x,n)/fact(n);
           SN += sumn;
          //s printf("\t N = |%i| SN = |%f|\n",n,SN);
       }
       
       n = 0,SE = 0;
       
       do
       {
            sume = pow(2*x,n)/fact(n);
            SE += sume;
            n++;
       }
       while (sume > EPS);
       
       printf("X =|%.1f| Y =|%f| SN = |%f| SE = |%f|\n",x,y,SN,SE);
    }
}  
 
 
