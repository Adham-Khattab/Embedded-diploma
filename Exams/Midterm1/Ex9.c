#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],temp;
    int i,j;
    printf("Enter the string: ");
    gets(str);
    i=0;
    j=strlen(str)-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i+=1;
        j-=1;
    }
    printf("String reversed ==> %s",str);
}