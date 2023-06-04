#include "FloatComplex.h"
#include <iostream>

FloatComplex::FloatComplex(float real, float imaginary) : IntComplex(0, 0), real(real), imaginary(imaginary) {}

FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    return FloatComplex(real + other.real, imaginary + other.imaginary);
}

FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    return FloatComplex(real - other.real, imaginary - other.imaginary);
}

FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
    float resultReal = real * other.real - imaginary * other.imaginary;
    float resultImaginary = real * other.imaginary + imaginary * other.real;
    return FloatComplex(resultReal, resultImaginary);
}

FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
    float divisor = other.real * other.real + other.imaginary * other.imaginary;
    float resultReal = (real * other.real + imaginary * other.imaginary) / divisor;
    float resultImaginary = (imaginary * other.real - real * other.imaginary) / divisor;
    return FloatComplex(resultReal, resultImaginary);
}

void FloatComplex::print() const {
    std::cout << real << " + " << imaginary << "i" << std::endl;
}
