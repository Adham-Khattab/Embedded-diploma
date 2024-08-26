#include <stdio.h>
#define PI 3.14
#define area(rad) (PI*rad*rad)

int main()
{
    int radius;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    printf("The area is %.2f",area(radius));
}