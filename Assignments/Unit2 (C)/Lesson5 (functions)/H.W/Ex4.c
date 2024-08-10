//!...Power function using recursion
#include<stdio.h>
int power(int base,int exp)
{
    
    if(exp<1)
    {
        return 1;
    }
    else
    {
        return base*power(base,exp-1);
    }
}

int main()
{
    int base,exp;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number (positive intiger): ");
    scanf("%d",&exp);
    printf("%d ^ %d = %d",base,exp,power(base,exp));
}