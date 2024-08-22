#include <stdio.h>
struct Student
{
    char name[20];
    short int roll;
    short int marks;
}S1;

int main()
{
    printf("Enter information of student:\n");
    printf("Enter name: ");
    fgets(S1.name,20,stdin); 
    printf("Enter roll number: ");
    scanf("%d",&S1.roll);   
    printf("Enter Marks: ");
    scanf("%d",&S1.marks);  
    printf("Displaying information: \n");
    printf("name: %s",S1.name);
    printf("Roll: %d\n",S1.roll);
    printf("Mark: %d\n",S1.marks);
}
