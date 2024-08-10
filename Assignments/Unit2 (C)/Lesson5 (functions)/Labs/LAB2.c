//!...Finding min valu in an array function
#include <stdio.h>
int ArrayMin(int array[],int ArraySize)
{
    int i,minValue=array[0];
    for(i=0;i<ArraySize;i++)
    {
        if(array[i]<minValue)
        {
            minValue=array[i];
        }
    }
    return minValue;
}

int main()
{
    int Array1[10]={35,67,27,54,76,44,59,32,43,25};
    int Array2[5]={28,71,67,83,62};
    int Array3[13]={87,21,74,36,27,64,87,63,27,86,48,32,76};
    printf("The minimum of Array1 is %d\n",ArrayMin(Array1,10));
    printf("The minimum of Array2 is %d\n",ArrayMin(Array2,5));
    printf("The minimum of Array3 is %d\n",ArrayMin(Array3,13));
}


/*
Draft 
sizeof function returns the (size of array*bytes)
since integer ==>size * 4
*/

// #include <stdio.h>
// int ArrayMin(int array[])
// {
//     int i,minValue=array[0];
//     for(i=0;i<sizeof(array);i++)
//     {
//         if(array[i]<minValue)
//         {
//             minValue=array[i];
//         }
//     }
//     return minValue;
// }

// int main()
// {
//     int Array1[]={35,67,27,54,76,44,59,32,43,25};
//     int Array2[]={28,71,67,83,62};
//     int Array3[]={87,21,74,36,27,64,87,63,27,86,48,32,76};
//     printf("The minimum of Array1 is %d\n",ArrayMin(Array1));
//     printf("The minimum of Array2 is %d\n",ArrayMin(Array2));
//     printf("The minimum of Array3 is %d\n",ArrayMin(Array3));
// }

