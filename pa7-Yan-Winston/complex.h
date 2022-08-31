#ifndef COMPLEX_H
#define COMPLEX_H

#include "calculator.h"

class Complex {
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double r, double im);

        void setReal(double r);
        void setImaginary(double im);

        double getReal() const;
        double getImaginary() const;

        friend Complex operator+(const Complex& c1, const Complex& c2);
        friend Complex operator-(const Complex& c1, const Complex& c2);
        friend Complex operator*(const Complex& c1, const Complex& c2);
        friend std::istream& operator>>(std::istream& stream, const Complex& c);
        friend std::ostream& operator<<(std::ostream& stream, const Complex& c);
};

#endif