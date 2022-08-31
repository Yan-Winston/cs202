// By: Winston Yan
// On: 6/4/2022
// For: CS 202 Programming Assignment 2

#ifndef student
#define student

class Student {
    private:
        int number;
        std::string firstName;
        std::string lastName;
        float gpa;

    public:
        int getNum();
        void setNum(int newNUM);
        std::string getFN();
        void setFN(std::string newFN);
        std::string getLN();
        void setLN(std::string newLN);
        float getGPA();
        void setGPA(float newGPA);
        void print();
};

#endif