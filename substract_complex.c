//
// Created by kirill on 24.11.17.
//

#include "complexnumber.h"
#include "substract_complex.h"

int substract_complex(ComplexNumber* result, ComplexNumber a, ComplexNumber b)
{
    result->real = a.real - b.real;
    result->imaginary = a.imaginary - b.imaginary;
    return 0;
}