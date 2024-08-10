//!...Function  that prints specific shape
#include <stdio.h>
int shape (int number)
{
    int i,j;
    for(i=0;i<number;i++)
    {
        for(j=i;j<number;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main()
{
    shape(10);
}