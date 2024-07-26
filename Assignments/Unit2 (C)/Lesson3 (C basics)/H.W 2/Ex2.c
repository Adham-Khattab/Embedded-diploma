#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet in lower case: ");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
        printf("%c is a vowel",alpha);
    }
    else
    {
        printf("%c is a constant",alpha);
    }
}