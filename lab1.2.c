#include<stdio.h>
#include<math.h>

int main()
{
    int m,n,l;
    
    printf("Enter m =  ");
    scanf("%i",&m);
    printf("Enter n =  ");
    scanf("%i",&n);
    
    l= --m-++n;
    printf("Your answer is %i \n",l);
    l= m<n++;
    printf("Your answer is %i \n",l);
    l= n-- > m++;
    printf("Your answer is %i \n",l);
    

    return 0;
}
