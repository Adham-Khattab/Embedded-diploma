#include <stdio.h>
int main()
{
    int arr[15];
    int* ptr =arr;
    int i,numbers;
    printf("Input the number of elements to store in the array (Max 15) : ");
    scanf("%d",&numbers);
    for(i=0;i<numbers;i++)
    {
        printf("Element - %d : ",i+1);
        scanf("%d",ptr);
        ptr++;        
    }
    ptr=&arr[numbers-1];
    printf("The elements of array in reverse order are : \n");
    for(i=numbers;i>0;i--)
    {
        printf("Element - %d : %d\n",i,*ptr);
        ptr--;
    }
}