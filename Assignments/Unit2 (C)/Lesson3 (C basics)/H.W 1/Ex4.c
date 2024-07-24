#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter 2 integers to Multiply: ");
    fflush(stdin);;fflush(stdout);
    scanf("%f %f", &num1 , &num2);
    printf("The result is : %f", num1*num2);
    
}