#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h"

class FloatComplex : public IntComplex {
private:
    float real;
    float imaginary;

public:
    FloatComplex(float real, float imaginary);
    FloatComplex operator+(const FloatComplex& other) const;
    FloatComplex operator-(const FloatComplex& other) const;
    FloatComplex operator*(const FloatComplex& other) const;
    FloatComplex operator/(const FloatComplex& other) const;
    void print() const;
};

#endif