//Do not change This code
#include "Dog.h"
#include "Cat.h"
#define NUM_CATS 2
#define NUM_DOGS 3
int main(){ 
    cout << "\nINEFFICIENT ATTEMPT\n" << endl;
    //let's create an array of cat objects
    Cat cat1(110.00, 6, 'M', "Tabby");
    Cat cat2(cat1);
    cat2.setAge(12);
    cat2.setCost(50.99);
    Cat catArray[NUM_CATS] = {cat1, cat2};
    cout << "\n======CATS AVAILABLE======" << endl;
    for(int i = 0; i < NUM_CATS; i++){
        catArray[i].printCatStats();
    }
    
    //let's create an array of dog objects
    Dog dog1(6500, 6, 'F', "Husky");
    Dog dog2 (3000, 3, 'M', "Golden Retriever");
    Dog dog3 (100, 24, 'M', "Mutt(Unknown)");
    Dog dogArray[NUM_DOGS] = {dog1, dog2, dog3};
    cout << "\n======DOGS AVAILABLE======" << endl;

    for(int i = 0; i < NUM_DOGS; i++){
        dogArray[i].printDogStats();
    }
    //wait a second... that's not very efficient!
    //let's modify the provided code! (see instructions)
}
