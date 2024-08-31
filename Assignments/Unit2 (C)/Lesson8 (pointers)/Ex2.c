#include <stdio.h>
int main ()
{
    int i;
    char arr[27];
    char* ptr =arr;
    for (i=0;i<26;i++)
    {
        *ptr = i + 'A';
        ptr++;
    }
    // Returning to the start of the array
    ptr = arr ;
    printf("The Alphabets are :\n");
    for(i=0;i<26;i++)
    {
        printf("%c ",*ptr);
        ptr++;
    }
}