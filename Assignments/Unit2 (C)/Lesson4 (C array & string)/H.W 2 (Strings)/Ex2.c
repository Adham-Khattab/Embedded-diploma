//!...Finding string length

#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count+=1;
    }
    printf("The length of the string is: %d",count);
}


/*
Note

The reason of adding (&& str[i] != '\n') 
is that fgets ends with a newline char

*/

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i,count=0;
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str,100,stdin);
//     for(i=0;str[i]!='\0' && str[i] != '\n';i++)
//     {
//         count+=1;
//     }
//     printf("The length of the string is: %d",count);
// }