/*
                       
              _____                 __     __                 _____         ____         ____
             /  _  \               |  |   |  |               /  _  \       |    \       /    |
            /  /_\  \       _______|  |   |  |_______       /  /_\  \      |   _ \     / _   | 
           /   ___   \     |   ____   |   |   ____   |     /   ___   \     |  | \ \___/ / |  |  
          /   /   \   \    |  |____|  |   |  |    |  |    /   /   \   \    |  |  \_____/  |  |
         /___/     \___\   |__________|   |__|    |__|   /___/     \___\   |__|           |__|

*/
#include <stdio.h>
int main ()
{
    char character;
    printf("Enter a character in capital form: ");
    scanf("%c",&character);
    printf("ASCII value of %c is %d",character,character);
}

// #include <stdio.h>
// int main ()
// {
//     int code;
//     printf("Enter ASCII code: ");
//     scanf("%d",&code);
//     printf("The character is %c",code);
// }