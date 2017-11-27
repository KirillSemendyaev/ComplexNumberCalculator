//
// Created by kirill on 27.11.17.
//

#include "complexnumber.h"
#include "multiply_complex.h"

int multiply_complex(ComplexNumber* result, ComplexNumber a, ComplexNumber b)
{
    result->real = a.real * b.real - a.imaginary * b.imaginary;
    result->imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return 0;
}