//WAP to print nth term of fibonacci series

#include<stdio.h>
int main()
{
    int a,b,n,i,sum;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    a=0;
    b=1;
    sum=0;
    
    for(i=1;i<(n-1);i++)
    {
        sum=a+b;        
        a=b;
        b=sum; 

    }
    printf("The %dth term of the fibonacci series is %d",n,sum);
}
