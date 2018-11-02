#include "Complex.h"

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex::~Complex() {}

double Complex::getReal() const {
    return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !this->operator==(other);
}

void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    this->real -= other.real;
    this->imaginary -= other.imaginary;
}

Complex Complex::operator*(const Complex& other) const {
    Complex tmp = *this;
    double tmp_real = tmp.real;
    
    tmp.real = tmp.real * other.real - tmp.imaginary * other.imaginary;
    tmp.imaginary = tmp_real * other.imaginary + tmp.imaginary * other.real;
    
    return tmp;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    if ( complex.getImaginary() < 0 ) {
        out << complex.getReal() << complex.getImaginary() << 'i';
    } else {
        out << complex.getReal() << '+' << complex.getImaginary() << 'i';
    }
    
    return out;
}
