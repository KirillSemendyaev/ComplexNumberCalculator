#include <stdio.h>
#include <stdlib.h>

#include "complexnumber.h"
#include "add_complex.h"

int main()
{
    ComplexNumber result, a, b;
    char c = 5;
    printf("__COMPLEX NUMBER CALCULATOR__\n\n");
    while (c != 0) {
        printf("Usage: \n 1) Add\n 2) Substract\n 3) Multiply\n 4) Divide\n\n 0) Exit\n\nCommand: ");
        scanf("%d", &c);

        if (c == 0)
            continue;
        while ((c < 0) || (c > 4)) {
            printf("Please, choose from 0 to 4: ");
            scanf("%d, &c");
        }

        printf("\nInput numbers:\n first:\n  real part: ");
        scanf("%lf", &(a.real));
        printf("  imaginary part: ");
        scanf("%lf", &(a.imaginary));

        printf(" second:\n  real part: ");
        scanf("%lf", &(b.real));
        printf("  imaginary part: ");
        scanf("%lf", &(b.imaginary));
        switch (c) {
            case 1:
                add_complex(&result, a, b);
                break;
            default:
                break;
        }
        printf("Result: ");
        if (result.imaginary >= 0) {
            printf("%.0lf+%.0lfi\n", result.real, result.imaginary);
        } else {
            printf("%.0lf%.0lfi\n", result.real, result.imaginary);
        }
    }

    return 0;
}