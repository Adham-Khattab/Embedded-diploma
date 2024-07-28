#include <stdio.h>
int main()
{
    int EndValue,i,sum=0;
    printf("Enter an endvalue to calculate the sum from 1 to that number: ");
    scanf("%d",&EndValue);
    for(i=1;i<=EndValue;i++)
    {
        sum+=i; 
    }
    printf("The summation from 1 to %d is %d",EndValue,sum);
}