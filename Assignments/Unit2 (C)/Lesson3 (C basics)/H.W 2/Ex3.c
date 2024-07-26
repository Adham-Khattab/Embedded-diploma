#include <stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter 3 numbers: ");
    scanf("%f %f %f",&num1,&num2,&num3);
    if(num1>=num2 &&num1>num3)
    {
        printf("The largest number is: %f",num1);
    }
    else if(num2>=num1 && num2>=num3)
    {
        printf("The largest number is: %f",num2);
    }
    else
    {
        printf("The largest number is: %f",num3);
    }
}