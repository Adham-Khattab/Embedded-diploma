#include <stdio.h>

void reverse_array(int arr[], int size) 
{
    int start=0;
    int end=size-1;

    while (start<end) 
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp; 
        start++;
        end--;
    }
}

int main() 
{
    int i;
    int a[5]={1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Before reversing: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    reverse_array(a, size);
    printf("\nAfter reversing: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}