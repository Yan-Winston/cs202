#ifndef student
#define student

#include <iostream>

#define MENU "STUDENT MANAGEMENT SYSTEM\n================================\n1.      Display Students\n2.      Add Courses\n3.      Display Student Schedule\n4.      Find Highest GPA Student\n5.      Display Instructors\n6.      Add Courses to Instructor Schedule\n7.      Display Instructor Schedule\n8.      Find Median Salary Instructor\n0.      Exit"
#define BUFFER_SIZE 100

class Person {
    protected:
        std::string firstName;
        std::string lastName;

    public:
        Person();
        Person(std::string fn, std::string ln);
        Person(const Person& copy);
        
        void setFirstName(const std::string fn);
        void setLastName(const std::string ln);
        
        std::string getFirstName();
        std::string getLastName();

        void print();
};

#endif