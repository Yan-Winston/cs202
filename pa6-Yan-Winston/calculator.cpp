#include "calculator.h"

template <class T>
Calculator<T>::Calculator() {
    T operand1 = 0;
    T operand2 = 0;
}
template <class T>
Calculator<T>::Calculator(T o1, T o2) {
    T operand1 = o1;
    T operand2 = o2;
}



template <class T>
void Calculator<T>::setOperand1(T o1) {
    operand1 = o1;
}
template <class T>
void Calculator<T>::setOperand2(T o2) {
    operand2 = o2;
}


template <class T>
T Calculator<T>::getOperand1() {
    return operand1;
}
template <class T>
T Calculator<T>::getOperand2() {
    return operand2;
}

template <class T>
T Calculator<T>::addition() {
    T result = operand1 + operand2;
    return result;
}
template <class T>
T Calculator<T>::subtraction() {
    T result = operand1 - operand2;
    return result;
}
template <class T>
T Calculator<T>::multiplication() {
    T result = operand1 * operand2;
    return result;
}
template <class T>
T Calculator<T>::division() {
    T result = operand1 / operand2;
    return result;
}