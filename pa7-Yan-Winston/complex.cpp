#include "complex.h"

Complex::Complex() {
    real = 0.0;
    imaginary = 0.0;
}
Complex::Complex(double r, double im) {
    real = r;
    imaginary = im;
}



void Complex::setReal(double r) {
    real = r;
}
void Complex::setImaginary(double im) {
    imaginary = im;
}

double Complex::getReal() const {
    return real;
}
double Complex::getImaginary() const {
    return imaginary;
}



Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
}
Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() - c2.getReal(), c1.getImaginary() - c2.getImaginary());
}
Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() * c2.getReal(), c1.getImaginary() * c2.getImaginary());
}

std::istream& operator>>(std::istream& stream, Complex& c) {
    double temp;
    
    std::cout << "Enter your real component: " << std::endl;
    std::cin >> temp;
    c.setReal(temp);

    std::cout << "Enter your imaginary component: " << std::endl;
    std::cin >> temp;
    c.setImaginary(temp);

    std::cout << std::endl;

    return stream;
}
std::ostream& operator<<(std::ostream& stream, const Complex& c) {
    std::cout << c.getReal() << " + " << c.getImaginary() << "i" << std::endl;
    return stream;
}