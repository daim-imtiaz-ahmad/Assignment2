#include "IntComplex.h"
#include <iostream>

IntComplex::IntComplex(int real, int imaginary) : real(real), imaginary(imaginary) {}

IntComplex IntComplex::operator+(const IntComplex& other) const {
    return IntComplex(real + other.real, imaginary + other.imaginary);
}

IntComplex IntComplex::operator-(const IntComplex& other) const {
    return IntComplex(real - other.real, imaginary - other.imaginary);
}

IntComplex IntComplex::operator*(const IntComplex& other) const {
    int resultReal = real * other.real - imaginary * other.imaginary;
    int resultImaginary = real * other.imaginary + imaginary * other.real;
    return IntComplex(resultReal, resultImaginary);
}

IntComplex IntComplex::operator/(const IntComplex& other) const {
    int divisor = other.real * other.real + other.imaginary * other.imaginary;
    int resultReal = (real * other.real + imaginary * other.imaginary) / divisor;
    int resultImaginary = (imaginary * other.real - real * other.imaginary) / divisor;
    return IntComplex(resultReal, resultImaginary);
}

void IntComplex::print() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}