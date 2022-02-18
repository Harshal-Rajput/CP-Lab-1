//Write a program to check whether a number is divisible by 2,7,11

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if ((num%2==0) && (num%7==0)  && (num%11==0))
    {
        printf("%d is divisible by 2, 7 and 11", num);
    }
    else if ((num%2==0) && (num%7!=0)  && (num%11!=0))
    {
        printf("%d is divisible by 2 but not by 7 and 11", num);
    }
    else if ((num%2!=0) && (num%7==0)  && (num%11!=0))
    {
        printf("%d is divisible by 7 but not by 2 and 11", num);
    }
    else if ((num%2!=0) && (num%7!=0)  && (num%11==0))
    {
        printf("%d is divisible by 11 but not by 2 and 7", num);
    }
    else if ((num%2==0) && (num%7==0)  && (num%11!=0))
    {
        printf("%d is divisible by 2 and 7 but not by 11", num);
    }
    else if ((num%2==0) && (num%7!=0)  && (num%11==0))
    {
        printf("%d is divisible by 2 and 11 but not by 7", num);
    }
    else if ((num%2!=0) && (num%7==0)  && (num%11==0))
    {
        printf("%d is divisible by 7 and 11 but not by 2", num);
    }
    else
    {
        printf("%d is not divisible by 2, 7 and 11", num);
    }

}
