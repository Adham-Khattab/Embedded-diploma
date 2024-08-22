#include <stdio.h>

struct distance
{
    short int feet;
    float inch;
}d1,d2,sum;

int main()
{
    printf("Enter information of 1st point:\n");
    printf("Enter feet: ");
    scanf("%d",&d1.feet);
    printf("Enter inch: ");
    scanf("%f",&d1.inch);
    printf("Enter information of 2nd point:\n");
    printf("Enter feet: ");
    scanf("%d",&d2.feet);
    printf("Enter inch: ");
    scanf("%f",&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12)
    {
        sum.inch -= 12;
        sum.feet++;
    }
    printf("Sum of distances: %d feet , %.2f inch",sum.feet,sum.inch);
}