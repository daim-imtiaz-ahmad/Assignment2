#include "IntComplex.h"
#include "FloatComplex.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 5) {
        std::cout << "Insufficient arguments provided." << std::endl;
        return 1;
    }

    int intReal = std::atoi(argv[1]);
    int intImaginary = std::atoi(argv[2]);
    float floatReal = std::atof(argv[3]);
    float floatImaginary = std::atof(argv[4]);

    IntComplex intComplex(intReal, intImaginary);
    FloatComplex floatComplex(floatReal, floatImaginary);

    // Addition
    IntComplex intSum = intComplex + intComplex;
    FloatComplex floatSum = floatComplex + floatComplex;

    // Subtraction
    IntComplex intDiff = intComplex - intComplex;
    FloatComplex floatDiff = floatComplex - floatComplex;

    // Multiplication
    IntComplex intProd = intComplex * intComplex;
    FloatComplex floatProd = floatComplex * floatComplex;

    // Division
    IntComplex intQuot = intComplex / intComplex;
    FloatComplex floatQuot = floatComplex / floatComplex;

    std::cout << "Integer Complex Number: ";
    intComplex.print();
    std::cout << "Float Complex Number: ";
    floatComplex.print();

    std::cout << "Addition Result:" << std::endl;
    std::cout << "Integer: ";
    intSum.print();
    std::cout << "Float: ";
    floatSum.print();

    std::cout << "Subtraction Result:" << std::endl;
    std::cout << "Integer: ";
    intDiff.print();
    std::cout << "Float: ";
    floatDiff.print();

    std::cout << "Multiplication Result:" << std::endl;
    std::cout << "Integer: ";
    intProd.print();
    std::cout << "Float: ";
    floatProd.print();

    std::cout << "Division Result:" << std::endl;
    std::cout << "Integer: ";
    intQuot.print();
    std::cout << "Float: ";
    floatQuot.print();

    return 0;
}