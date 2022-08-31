#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
    private:
        int year;
        string make, model;
    public:
        Car();
        Car(int year, string make, string model);
        Car(const Car& copy);

        int getYear() const;
        string getMake() const;
        string getModel() const;

        void setYear(int);
        void setMake(string);
        void setModel(string);

        void print();
};

#endif