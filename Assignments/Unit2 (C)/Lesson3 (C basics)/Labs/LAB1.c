#include <stdio.h>
int main()
{
    float radius,area,circumference;
    char choice;
    printf("Enter a radius: ");
    scanf("%f",&radius);
    printf("Enter a choice: ");
    scanf(" %c",&choice);
    if(choice=='a'||choice=='A')
    {
        area=3.1415*radius*radius;
        printf("The area of the circle of radius %f is: %f",radius,area);
    }
    else if(choice=='c'||choice=='C')
    {
        circumference=2*3.1415*radius;
        printf("The circumference of the circle of radius %f is: %f",radius,circumference);
    }
    else
    {
        printf("No such choice");
    }
}