//!...Creating a factorial function
#include <stdio.h>

int factorial(int num)
{
    int result=1;
    for(num;num>0;num--)
    {
        result *=num;
    }
    return result;
}

int main()
{
    printf("Factorial of %d is %d\n",10,factorial(10));
    printf("Factorial of %d is %d\n",0,factorial(0));
    printf("Factorial of %d is %d\n",5,factorial(5));
}