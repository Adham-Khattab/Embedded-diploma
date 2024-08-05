#include <stdio.h>
int main()
{
    int a[10][10],transpose[10][10],r,c,i,j;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d",&r,&c);
    printf("Enter elemnts of the matrix: \n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        printf("Enter elements a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("Entered matrix: \n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        printf("%d ",a[i][j]);
        if(j==c-1)
        {
            printf("\n");
        }
    }    
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    {
        transpose[j][i]=a[i][j];
    }
    printf("Transpose of the matrix: \n");
    for(i=0;i<c;i++)
    for(j=0;j<r;j++)
    {
        printf("%d ",transpose[i][j]);
        if(j==r-1)
        {
            printf("\n");
        }
    }
}