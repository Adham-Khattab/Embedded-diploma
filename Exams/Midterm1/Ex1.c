#include <stdio.h>
int sum_of_digits(char arr[])
{
    int i,sum=0;
    for(i=0;arr[i]!='\0';i++)
    {
        sum+=arr[i]-'0';
    }
    return sum;
}

int main()
{
    char arr[20];
    printf("Enter a number: ");
    scanf("%s",arr);
    printf("The sum of numbers is %d ",sum_of_digits(arr));
}