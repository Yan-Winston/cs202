//This driver won't work at first. Make it work.
#include "Dog.h"
#include "Cat.h"
#define NUM_PETS 5

void bubbleSort(Pet petarray[]);

int main(){ 
    //let's create some cats
    Cat cat1(110.00, 6, 'M', "Tabby");
    Cat cat2(cat1);
    cat2.setAge(12);
    cat2.setCost(50.99);

    
    //let's create some dogs
    Dog dog1(6500, 6, 'F', "Husky");
    Dog dog2(3000, 3, 'M', "Golden Retriever");
    Dog dog3(100, 24, 'M', "Mutt(Unknown)");

    std::cout << dog3.getAge() << std::endl;
    
    //Alright, let's create an array of Pets, and add the cats and dogs

    Pet petArray[NUM_PETS] = {cat1, cat2, dog1, dog2, dog3};

    //Bubble sort the array so that we print lowest cost to highest
    bubbleSort(petArray);

    //call the print function on every pet in the sorted array
    for (int i = 0; i < NUM_PETS; i ++){
        petArray[i].printPetInfo();
    }
}

void bubbleSort(Pet petArray[]){
    for(int i = 0; i < NUM_PETS; i++){
        for(int j = 0; j < NUM_PETS-1; j++){
            if(petArray[j].getCost() > petArray[j+1].getCost()){
                Pet temp = petArray[j];
                petArray[j] = petArray[j+1];
                petArray[j+1] = temp;
            }
        }
    }
}
