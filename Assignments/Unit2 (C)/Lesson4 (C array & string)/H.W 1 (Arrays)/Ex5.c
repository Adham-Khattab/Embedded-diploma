//!...Searching for an item in the list 
#include <stdio.h>
int main()
{
    float lst [50]={};
    float search_item;
    int Data_number,i,not_found=0;
    printf("Enter the no. of data: ");
    scanf("%d",&Data_number);
    for (i=0;i<Data_number;i++)
    {
        printf("Enter numbers: ");
        scanf("%f",&lst[i]);
    }
    printf("Enter an element to be searched:");
    scanf("%f",&search_item);
    for (i=0;i<Data_number;i++)
    {
        if (search_item==lst[i])
        {
            printf("The number is found at position %d in the list",i+1);
            not_found=1;
        }
        //If i put an else conditon here it will print not found in each iteration
    }
    if(not_found!=1)
    {
        printf("Element not found");
    }
}