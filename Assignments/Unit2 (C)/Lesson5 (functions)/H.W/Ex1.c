//!...Function to find prime numbers between 2 intervals of numbers

#include <stdio.h>
int is_prime(int num) 
{
    if (num <= 1) 
    {
        return 0; 
    }
    for (int i=2;i*i<= num;i++) 
    {
        if (num%i == 0) 
        {
            return 0; 
        }
    }
    return 1;  
}

void find_primes(int start, int end) 
{
    printf("Prime numbers between %d and %d:\n", start, end);
    for (int num = start; num <= end; num++) 
    {
        if (is_prime(num)) 
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() 
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end); 
    find_primes(start, end);

}