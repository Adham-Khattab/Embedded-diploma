#include "stdio.h"
int main()
{
    int num1 , num2;
    printf("Enter two integers: ");
    fflush(stdin);;fflush(stdout);
    scanf("%d %d", &num1 , &num2);
    printf("The sum is : %d", num1+num2);
}  

