// By: Winston Yan
// On: 6/20/2022
// For: CS 202 Midterm

#ifndef TRAINER_H
#define TRAINER_H

#include "Pikachu.h"

class Trainer {
    private:
        bool isNiceToPokemon;
        Pokemon startingPokemon;
        std::string trainerName;
    
    public:
        Trainer();
        Trainer(bool intp, Pokemon sP, std::string tn);
        Trainer(const Trainer& copy);

        void setINTP(bool intp);
        void setTrainerName(std::string tn);
        void setPokemon(Pokemon pokemon);

        bool getINTP();
        std::string getTrainerName();
        Pokemon getPokemon();

        void printTrainer();
};

#endif