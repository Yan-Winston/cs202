# CS202-Summer22-midtermPrep
This repository is used for CS202 midtermPrep. Use the instructions to create 3 classes (aggregation + inheritance)

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Continued use of **class** building skills including **aggregation**
3.  Provide practice with new class **Inheritance** skills.
### Important Notes:
1.    **Program Design**: It is up to you to decide which class inherits from another class, and which class is aggregated into another class. This will determine how things are included and if one class inherits from another.

2.    **Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from “Correct usage: ” to “correct”. 

3.    **Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted on your final if no header comments are included.
## Program
Your project should include the following files:
```
- driver.cpp
- banana.cpp
- banana.h
- fruit.cpp
- fruit.h
- seed.cpp
- seed.h
- makefile  
```
Your executable should be named ```fruitSalad```
## Programming Problem
Write a program for making a fruit salad!

## Requirements
```
driver.cpp
```
The driver has been provided to you. Please modify it so that it prints banana, fruit, and seed information for the pre-set newBanana. Then change the peel on the banana to false, and print banana, fruit, and seed information again.

```
fruit.h
```
**Functionality**: This file should contain the definition for the Fruit class, which includes the following attributes:  
```
string color;
int numSeeds;
Seed seedType;
```
```
fruit.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor  
number of seeds should be 0, and color should be an empty string
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printFruit()*     
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: this function should display the fruit color and number of seeds, followed by "Each seed has the following attributes: " (see output example at the end, or run executable).  
```
banana.h
```
**Functionality**: This file should contain the definition for the Banana class, which includes the following attributes:  
```
bool peel;
```
```
banana.cpp
```
**Functionality**: This class should contain the function definitions for the following functions:  

*Constructors*  
- default constructor  
peel should be false
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printBanana()*  
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: this function should display fruit name (banana). Then it should use the peel attribute to determine if the fruit is peeled (no peel) or not peeled (peel), and display an appropriate message dependant on the state of the peel.  
```
seed.h
```
**Functionality**: This class should contain the definition for the seed class, which includes the following attributes:  

```
int size
string shape
```


```
seed.cpp
```
**Functionality**: This file should contain the function definitions for the following functions: 
 *Constructors*  
- default constructor  
size should be 0, shape should be an empty string
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printSeed()*  
**Input Parameters**: None   
**Returned Output**: None  
**Functionality**: this function should display the seed size and shape, each on their own line.  


**Sample Output**:
```
This fruit is a banana, and it is currently not peeled.
It is yellow and has 12 seeds
Each seed has the following attributes: 
Seed size: 1
Seed Shape: round


This fruit is a banana, and it is currently peeled.
It is yellow and has 12 seeds
Each seed has the following attributes: 
Seed size: 1
Seed Shape: round
```

## Submission details --Note: submission of this is not mandatory, but a good way to check if you're understanding. Solution can be found on WebCampus.
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
```

