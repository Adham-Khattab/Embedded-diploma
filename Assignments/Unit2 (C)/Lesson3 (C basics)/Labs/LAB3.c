#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is the smallest",num2);
    }
    else
    {
        printf("%d is the smallest",num1);
    }
}