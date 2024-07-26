#include <stdio.h>
int main()
{
    int sum=0;
    int number,i;
    printf("Enter a number to calculate the numbers before it: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        sum+=i;
    }
    printf("Sum from 1 to %d is %d",number,sum);
}