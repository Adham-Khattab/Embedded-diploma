#include <stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex addComplex(struct complex num1, struct complex num2)
{
    struct complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main()
{
    struct complex num1, num2, result;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = addComplex(num1, num2);

    printf("Sum of the complex numbers: %.2f + %.2fi\n", result.real, result.imag);
}