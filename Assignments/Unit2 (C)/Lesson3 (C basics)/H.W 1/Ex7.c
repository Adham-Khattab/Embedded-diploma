//!...Very important "interview Question"
//!...Correct answer
#include <stdio.h>
int main() 
{
    int a = 10, b = 20;
    printf("Before swap:\na = %d\nb = %d", a, b);

    a = a + b; // a = 30
    b = a - b; // b = 10
    a = a - b; // a = 20

    printf("\nAfter swap:\na = %d\nb = %d\n", a, b);

}

/////////////////////////////////////////////////////////////////////
//?...Draftttttt

// #include <stdio.h>
// int main()
// {
//     int a=1,b=2;
//     printf("Before swapping:\na=%d\nb=%d",a,b);
//     a=a+b; //3
//     b=b+a; //3
//     a=b-a; //1
//     b=a-b; //-1
//     printf("\nAfter swapping:\na=%d\nb=%d",a,b);
// }

// #include <stdio.h>
// int main()
// {
//     int a=4,b=27;
//     printf("Before swapping:\na=%d\nb=%d",a,b);
//     a=a+4; //8
//     b=b+3; //30
//     b=b-3; //30-3=27
//     a=a-4; //8-4=5

//     printf("\nAfter swapping:\na=%d\nb=%d",a,b);
// }
