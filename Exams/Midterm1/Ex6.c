#include <stdio.h>

int find_unique(int arr[], int size) 
{
    int result=0;
    for (int i=0;i<size;i++) 
    {
        result^=arr[i]; 
    }
    return result;
}

int main() 
{
    int a1[7]={4, 2, 5, 2, 5, 7, 4};
    int a2[3]={4, 2, 4};

    printf("Unique number: %d\n", find_unique(a1,7));
    printf("Unique number: %d\n", find_unique(a2,3));

    return 0;
}