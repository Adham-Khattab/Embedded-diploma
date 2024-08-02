#include <stdio.h>
int main()
{
    int R,C;
    float Matrix[3][3];
    float MatrixTranspose [3][3];
    for (R=0;R<3;R++)
    {
        for (C=0;C<3;C++)
        {
            printf("Enter matrix elements: ");
            scanf("%f",&Matrix[R][C]);
        }
    }
    printf("The matrix you entered :\n");

    for (R=0;R<3;R++)
    {
        for (C=0;C<3;C++)
        {
            printf("%.2f ",Matrix[R][C]);
        }
        printf("\n");
    }
    printf("============================");
    //Finding transpose 
    for (R=0;R<3;R++)
    {
        for (C=0;C<3;C++)
        {
            MatrixTranspose[R][C]=Matrix[C][R];
        }
    }
    printf("\nThe transpose of the matrix is :\n");
    for (R=0;R<3;R++)
    {
        for (C=0;C<3;C++)
        {
            printf("%.2f ",MatrixTranspose[R][C]);
        }
        printf("\n");
    }
}