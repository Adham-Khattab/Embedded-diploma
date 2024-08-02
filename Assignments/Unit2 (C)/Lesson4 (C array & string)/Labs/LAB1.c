#include <stdio.h>
int main()
{
    int i;
    float degrees [10];
    for (i=0;i<10;i++)
    {
        printf("Enter students degrees: ");
        scanf("%f",&degrees[i]);
    }
    for (i=0;i<10;i++)
    {
        printf("student %d degree is %.2f\n",i+1,degrees[i]);
    }
}