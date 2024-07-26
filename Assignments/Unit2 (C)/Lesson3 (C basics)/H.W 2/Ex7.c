#include <stdio.h>
int main()
{
    int number,i,total=1;
    printf("Enter a number to find its factorial:");
    scanf("%d",&number);
    if (number>=0)
    {
        for(i=number;i>=1;i--)
        {
            total*=i;
        }
        printf("The factorial of %d is %d",number,total);
    }
    else
    {
        printf("No factorial for a negative number");
    }
}