#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 number to find the largest of them: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is the greatest number",num1);
        }
        else
        {
            printf("%d is the greatest number",num3);
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("%d is the greatest number",num2);
        }
        else
        {
            printf("%d is the greatest number",num3);
        }
    }
}