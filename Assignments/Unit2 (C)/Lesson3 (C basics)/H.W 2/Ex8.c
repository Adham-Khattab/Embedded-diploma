#include <stdio.h>
int main()
{
    char operation;
    float num1,num2;
    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter the operator: ");
    scanf(" %c",&operation); //A space before %c 
    printf("Enter second number: ");
    scanf("%f",&num2);
    switch(operation)
    {
        case '+' :
            printf("%f %c %f = %f",num1,operation,num2,num1+num2);
            break;
        case '-' :
            printf("%f %c %f = %f",num1,operation,num2,num1-num2);
            break;
        case '*' :
            printf("%f %c %f = %f",num1,operation,num2,num1*num2);
            break;
        case '/' :
            printf("%f %c %f = %f",num1,operation,num2,num1/num2);
            break;
        default:
            printf("No such operation");
            break;
    }
}