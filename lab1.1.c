#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    
    printf("Enter a =  ");
    scanf("%lf",&a);
    
    printf("Enter b =  ");
    scanf("%lf",&b);
    
    c=((pow((a+b),4))-(pow(a,4))+4*(pow(a,3))*b+6*(pow(a,2))*(pow(b,2)))/4*a*(pow(b,3))+(pow(b,4));
    
    printf("Your answer is %lf \n",c);
    
    return 0;
}
