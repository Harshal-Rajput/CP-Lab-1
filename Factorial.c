// WAP to find factorial of a number

#include<stdio.h>
int main()
{
    int i,x,n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    x=1;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("Factorial of %d is %d\n", n,x);
}
