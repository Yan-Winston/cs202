# CS202 Summer2022 PokemonTrainerManager Midterm

This repository contains the CS202 Pikachu Pokemon Trainer Manager Midterm. Use the instructions to create 3 classes (aggregation + inheritance). Each trainer has a pokemon, and every Pikachu is a Pokemon species. Let's build a program that will allow us to add a starter pokemon (pikachu) to new trainers.

## Project Goals
The goal of this project is to:
1.	Show proficiency with **makefiles**.
2.  Show proficiency with **class** building skills including **aggregation**
3.  Show proficiency with class **Inheritance** skills.

### Important Notes:
1.    **Program Design**: It is up to you to decide which class inherits from another class, and which class is aggregated into another class. This will determine how things are included and if one class inherits from another.
    **Note**: if one class inherits from another, you should make sure EVERY constructor in the child class sets the parent class properties!

2.    **Formatting**: Make sure that your output matches the executable's output and formatting. For example, do not change the text from “Correct usage: ” to “correct”. 

3.    **Comments**: Header comments are required in the driver file and recommended for the rest of the program. Points will be deducted on your final if no header comments are included.
4.    **Executable Run**: You should run the included TrainerManager executable to match output exactly. To run it, you will need to enable executable permissions for yourself using ```chmod u+x TrainerManager```.
## Program
Your project should include the following files:
```
- driver.cpp
- makefile 
- Pokemon.cpp
- Pokemon.h
- Pikachu.cpp
- Pikachu.h
- Trainer.cpp
- Trainer.h 
```
Your executable should be named ```trainer_manager```
## Programming Problem
Let's build a program that will allow us to add a starter pokemon (pikachu) to new trainers.
Note: your default pokemon will not be pikachu.
## Requirements
```
driver.cpp
```
The driver has been provided to you, but you will need to add an include. Please append to it so that it creates a Pikachu. Change the pikachu's utterance to Pika! , change the Pikachu so that it does not like its pokeball and is male. Create a new Trainer named Ash that is nice to his pokemon and starts with the pikachu. Finally, print the trainer information and the pikachu information, using the appropriate methods from the appropriate classes.
```
Pokemon.h
```
**Functionality**: This file should contain the definition for the Pokemon class, which includes the following attributes:  
```
string name, type, utterance;
int age, health;
```
```
Pokemon.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors (be sure to set all appropriate variables)*  
- default constructor  
name: Wobbuffet  
type: Psychic  
utterance: Wobba!  
age: 8  
health: 382  
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printPokemon()*     
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: 
This function should display all of the stats associated with every pokemon. ( run executable).  
```
Pikachu.h
```
**Functionality**: This file should contain the definition for the Pikachu class, which includes the following attributes:  
```
string eyeColor, gender;
bool likesPokeball;
```
```
Pikachu.cpp
```
**Functionality**: This class should contain the function definitions for the following functions:  

*Constructors(be sure to set all appropriate variables)*  
- default constructor  
Name: Pikachu  
Type: Electric  
Utterance: Pika Pika
age: 4  
health: 35  
eye color: black  
gender: female  
likesPokeball: True  
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printPikachu()*  
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: this function should display information about the eye color, gender, and whether it likes its pokeball (Run executable to see exact output).
```
Trainer.h
```
**Functionality**: This class should contain the definition for the Trainer class, which includes the following attributes:  

```
bool isNiceToPokemon;
Pokemon startingPokemon;
string trainerName;
```


```
Trainer.cpp
```
**Functionality**: This file should contain the function definitions for the following functions: 
 *Constructors(be sure to set all appropriate variables)*  
- default constructor  
isNiceToPokemon: false  
trainerName: James  
startingPokemon: default pokemon  
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printTrainer()*  
**Input Parameters**: None   
**Returned Output**: None  
**Functionality**: This function should display the trainer name, number of pokemon (1), whether they're nice to their pokemon, and use the printPokemonStats function to display any stats about the pokemon (run executable).


## Submission details 
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
6.  Submit your repo link and username on WebCampus under the midterm quiz.  
7. You may submit as many times as you would like during your test window.
```
