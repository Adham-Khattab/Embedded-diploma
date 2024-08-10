//!...Finding a factorial of a number using recursion function
#include <stdio.h>
int factorial(int num)
{
    if (num==1)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
}

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
}