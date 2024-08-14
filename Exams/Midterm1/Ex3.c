#include <stdio.h>

void print_prime_numbers(int n1, int n2) {
    for (int i = n1; i <= n2; i++) {
        int is_prime = 1;
        if (i <= 1) {
            is_prime = 0;
        } else if (i <= 3) {
            is_prime = 1;
        } else if (i % 2 == 0 || i % 3 == 0) {
            is_prime = 0;
        } else {
            for (int j = 5; j * j <= i; j += 6) {
                if (i % j == 0 || i % (j + 2) == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n1 = 1, n2 = 20;
    print_prime_numbers(n1, n2);
    return 0;
}