#ifndef PET_H
#define PET_H

#include <iostream>

class Pet {
    protected:
        int age;
        char sex;
        std::string breed;
        float cost;
        std::string petType;
    
    public:
        Pet();
        Pet(const Pet& copy);
        Pet(int a, char s, std::string b, double c); 

        void setAge(const int a);
        void setSex(const char s);
        void setBreed(const std::string b);
        void setCost(const float c);
        void setPetType(const std::string t);

        int getAge() const;
        char getSex() const;
        std::string getBreed() const;
        float getCost() const;
        std::string getPetType() const;

        void printPetInfo();
};

#endif