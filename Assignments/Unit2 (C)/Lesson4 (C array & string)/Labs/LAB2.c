#include <stdio.h>
int main()
{
    float x[]={5,16,22,3.5,15};
    int i;
    float y;
    for (i=0;i<5;i++)
    {
        y=5*x[i]*x[i]+3*x[i]+2;
        printf("Value of y at x = %.2f is %.2f\n",x[i],y);
    }
}