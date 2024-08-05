//!...Calculating average of numbers in array
#include <stdio.h>
int main()
{
    int Data_Number,i;
    float lst[50]={};
    float average,sum=0;
    printf("Enter the number of data: ");
    scanf("%d",&Data_Number);
    for(i=0;i<Data_Number;i++)
    {
        printf("Enter number: ");
        scanf("%f",&lst[i]);
        sum+=lst[i];
    }
    average=sum/Data_Number;
    printf("The average is: %.2f",average);
}