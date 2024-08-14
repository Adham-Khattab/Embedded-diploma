#include <stdio.h>
int sum_of_numbers(int number) {
    return number*(number+1)/2;
}
int main() 
{
    int sum = sum_of_numbers(100);
    printf("Sum of numbers from 1 to 100: %d\n", sum);
    return 0;
}