//
// Created by kirill on 23.11.17.
//

#include "complexnumber.h"
#include "add_complex.h"


int add_complex(ComplexNumber *result, ComplexNumber a, ComplexNumber b) {
    result->real = a.real + b.real;
    result->imaginary = a.imaginary + b.imaginary;
    return 0;
}

