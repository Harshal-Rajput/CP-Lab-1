// WAP to calculate HCF of two numbers

#include <stdio.h>
int main() 
{
    int x,y,i,a;
    printf("Enter 1st number\n");
    scanf("%d",&x);
    printf("Enter 2nd number\n");
    scanf("%d",&y);
    
    for(i=1;(i<=x && i<=y);i++)
    {
        if ((x%i==0) && (y%i==0))
        {
            a=i;
        }
    }
    printf("HCF of %d and %d = %d", x,y,a);
}
