#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to check if +ve,-ve or zero");
    scanf("%d",&number);
    if(number>0)
    {
        printf("%d is a positive number",number);
    }
    else if (number<0)
    {
        printf("%d is a negative number",number);
    }
    else
    {
        printf("You entered zero");
    }
}
/////////////////////////////////////////////////////////////////////
//todo...Another way using nested loops
// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter a number to check if +ve,-ve or zero");
//     scanf("%d",&number);
//     if (number>=0)
//     {
//         if(number>0)
//         {
//             printf("%d is a positive number",number);
//         }
//         else
//         {
//             printf("You entered zero");
//         }
//     }
//     else
//     {
//         printf("%d is a negative number",number);
//     }
// }