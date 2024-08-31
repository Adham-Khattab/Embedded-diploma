#include <stdio.h>

struct emp 
{
    char name [50];
    int id;
};
int main()
{
    struct emp emp1 = {"Alex",1002};
    struct emp* ptr;
    ptr = &emp1;
    printf("Employee Name : %s\n",ptr->name);
    printf("Employee ID : %d\n",ptr->id);
}