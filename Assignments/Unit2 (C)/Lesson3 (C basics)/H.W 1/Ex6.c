#include <stdio.h>
int main()
{
    float a=1.0,b=2.0,c;
    printf("The two numbers before swapping:\na=%f\nb=%f",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping:\na=%f\nb=%f",a,b);
}