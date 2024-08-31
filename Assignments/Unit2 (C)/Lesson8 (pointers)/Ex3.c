#include <stdio.h>
int main() 
{
    char str[50]; 
    char *ptr = str; 
    printf("Enter a string: ");
    scanf("%s",&str);
    while (*ptr != '\0') 
    {
        ptr++; 
    }
    ptr--; 
    while (ptr >= str) 
    {
        printf("%c", *ptr);
        ptr--;
    }
}