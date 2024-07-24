/*
                       
              _____                 __     __                 _____         ____         ____
             /  _  \               |  |   |  |               /  _  \       |    \       /    |
            /  /_\  \       _______|  |   |  |_______       /  /_\  \      |   _ \     / _   | 
           /   ___   \     |   ____   |   |   ____   |     /   ___   \     |  | \ \___/ / |  |  
          /   /   \   \    |  |____|  |   |  |    |  |    /   /   \   \    |  |  \_____/  |  |
         /___/     \___\   |__________|   |__|    |__|   /___/     \___\   |__|           |__|

*/
#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter 2 integers to Multiply: ");
    fflush(stdin);;fflush(stdout);
    scanf("%f %f", &num1 , &num2);
    printf("The result is : %f", num1*num2);
    
}
