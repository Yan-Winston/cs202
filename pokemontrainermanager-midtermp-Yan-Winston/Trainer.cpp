// By: Winston Yan
// On: 6/20/2022
// For: CS 202 Midterm

#include "Trainer.h"


Trainer::Trainer() {
    isNiceToPokemon = false;
    trainerName = "James";
    startingPokemon = Pokemon();
}
Trainer::Trainer(bool intp, Pokemon sP, std::string tn) {
    isNiceToPokemon = intp;
    startingPokemon = sP;
    trainerName = tn;
}
Trainer::Trainer(const Trainer& copy) {
    isNiceToPokemon = copy.isNiceToPokemon;
    startingPokemon = copy.startingPokemon;
    trainerName = copy.trainerName;
}

void Trainer::setINTP(bool intp) {
    isNiceToPokemon = intp;
}
void Trainer::setTrainerName(std::string tn) {
    trainerName = tn;
}
void Trainer::setPokemon(Pokemon pokemon) {
    startingPokemon = pokemon;
}

bool Trainer::getINTP() {
    return isNiceToPokemon;
}
std::string Trainer::getTrainerName() {
    return trainerName;
}
Pokemon Trainer::getPokemon() {
    return startingPokemon;
}

void Trainer::printTrainer() {
    std::string treatsPokemon = "treat them terribly :(";
    if (isNiceToPokemon) { 
        treatsPokemon = "treat them very well!";
    }
    std::cout << "Trainer " << trainerName << std::endl << "1 pokemon, and they " << treatsPokemon << std::endl;
    startingPokemon.printPokemon();
}