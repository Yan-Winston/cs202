// By: Winston Yan
// On: 6/20/2022
// For: CS 202 Midterm


#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

class Pokemon {
    protected:
        std::string name, type, utterance;
        int age, health;
    
    public:
        Pokemon();
        Pokemon(std::string n, std::string t, std::string u, int a, int h);
        Pokemon(const Pokemon& copy);

        void setName(std::string n);
        void setType(std::string t);
        void setUtterance(std::string u);
        void setAge(int a);
        void setHealth(int h);

        std::string getName();
        std::string getType();
        std::string getUtterance();
        int getAge();
        int getHealth();

        void printPokemon();

};

#endif