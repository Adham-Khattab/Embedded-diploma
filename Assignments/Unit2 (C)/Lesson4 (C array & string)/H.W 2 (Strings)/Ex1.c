//!...Frequency of characters in a string

#include <stdio.h>
#include <string.h>
int main()
{
    int i ,count=0;
    char str[100],letter;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter a character to find frequency: ");
    scanf("%c",&letter);
    for (i=0;i<strlen(str);i++)
    {
        if(letter==str[i])
        {
            count+=1;
        }
    }
    printf("The frequency of %c is %d",letter,count);
}