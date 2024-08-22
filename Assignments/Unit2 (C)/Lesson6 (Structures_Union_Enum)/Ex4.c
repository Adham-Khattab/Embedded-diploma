#include <stdio.h>

struct class
{
    float mark;
    char name[50];
    short int roll;  
};
int main()
{
    struct class students[5];
    int i;
    printf("Enter students information:\n");
    for(i=0;i<5;i++)
    {
        students[i].roll=i+1;
        printf("For roll number %d\n",students[i].roll);
        printf("Enter name: ");
        scanf("%s",students[i].name);
        printf("Enter Mark: ");
        scanf("%f",&students[i].mark);
        printf("\n");
    }
    printf("************************\n");
    printf("Displaying students info\n");
    printf("************************\n");
    for(i=0;i<5;i++)
    {
        printf("info for roll number %d\n",students[i].roll);
        printf("Name: %s\n",students[i].name);
        printf("Mark: %.2f\n",students[i].mark);
    }
}