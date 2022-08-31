#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

template <class T>
class Calculator {
    private:
        T operand1;
        T operand2;

    public:
        Calculator();
        Calculator(T o1, T o2);

        void setOperand1(T o1);
        void setOperand2(T o2);

        T getOperand1();
        T getOperand2();

        T addition();
        T subtraction();
        T multiplication();
        T division();
};

#endif