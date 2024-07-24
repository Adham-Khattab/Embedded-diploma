#include <stdio.h>
int main()
{
    int x;
    printf("Enter an integer:");
    fflush(stdin);fflush(stdout);
    scanf("%d",&x);
    printf("You entered: %d",x);
    
}