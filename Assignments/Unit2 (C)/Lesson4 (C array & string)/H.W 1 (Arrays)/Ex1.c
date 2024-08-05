//!...Adding 2x2 matrix using 2d arrays
#include <stdio.h>
int main()
{
    float first_matrix[2][2];
    float second_matrix[2][2];
    float sum_matrix[2][2];
    int r,c;
    printf("***Enter First Matrix***\n");
    for (r=0;r<2;r++)
    {
        for (c=0;c<2;c++)
        {
            printf("Enter a%d%d: ",r+1,c+1);
            scanf("%f",&first_matrix[r][c]);
        }
    }
    printf("***Enter Second Matrix***\n");
    for (r=0;r<2;r++)
    {
        for (c=0;c<2;c++)
        {
            printf("Enter b%d%d: ",r+1,c+1);
            scanf("%f",&second_matrix[r][c]);
        }
    }
    //Summation operation
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            sum_matrix[r][c]=first_matrix[r][c]+second_matrix[r][c];
        }
    }
    printf("***Sum of Matrix***\n");
    for (r=0;r<2;r++)
    {
        for (c=0;c<2;c++)
        {
            printf("%.2f ",sum_matrix[r][c]);
        }
        printf("\n");
    } 
}