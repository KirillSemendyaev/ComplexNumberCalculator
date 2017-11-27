//
// Created by kirill on 27.11.17.
//

#include "complexnumber.h"
#include "divide_complex.h"

int divide_complex(ComplexNumber* result, ComplexNumber a, ComplexNumber b)
{
    result->real = (a.real * b.real + a.imaginary * b.imaginary)
                   / (b.real * b.real + b.imaginary * b.imaginary);
    result->imaginary = (a.imaginary * b.real - a.real * b.imaginary)
                        / (b.real * b.real + b.imaginary * b.imaginary);
    return 0;
}