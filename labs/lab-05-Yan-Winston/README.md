# CS202-Lab5

## Lab Goals
The goal of this Lab is to:
1.	Continued practice with modifying **makefiles**.
2.  Continued practice with **arrays of objects**.
3.	Allow students to modify a program to use **Inheritance**.
4.  Allow students to implement **bubble sort**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Welcome to the pet shop! When you are finished, the following files should be added to your repo: <br/>
```
Pet.cpp
Pet.h
```
The following files should be modified in your repo: <br/>
```
Cat.cpp
Cat.h
Dog.h
Dog.cpp
```

Name your final executable _Pet_Shop_

**The program should behave as follows:**  
The files have been provided for a complete pet shop project. Please compile and run it to verify everything works. Your job is to add a Pet class to the project, and inherit that class within the existing Cat and Dog classes as directed. Then you will add a bubblesort function to the driver that sorts the array of pets from lowest to highest, so that you can print the cheapest and most expensive animals in the store. You have  been provided with the makefile to generate _Inefficient\_Pet\_Shop_, which is the way that the code should behave before modification. You will need to modify the makefile once your Pet class is written, and the other classes modified to create _Pet\_Shop_ using _newDriver.cpp_.

### Step 1
Make the makefile to generate _Inefficient\_Pet\_Shop_. Run the executable to see behavior. Modify your make file so that you make a new object called newDriver.o from the newDriver.cpp, using it instead of driver.o when you make the final executable. _You should see that the make file throws some errors as it tries to add Cat and Dog (two separate classes) to the same array_.

### Step 2
You should notice that there's _a lot_ of redundant code in Cat and Dog. Not only that, but we can't make an array that contains dogs _and_ cats, so we'll fix that in this step. 

Create a class called Pet. Create it's constructors (all three), and make s`ure it sets them appropriately. It should have the following attributes:<br/>
```
age
sex
breed
cost
```

Alter Dog.h and Cat.h so that they _inherit_ these properties from pet, instead of having a bunch of redundant code. _All getters and setters from Dog and Cat should be in Pet when you are finished, but your constructors and the print functions should still be in the Dog and Cat classes_

### Step 3
We now have a problem- how does an end user keep track of _which type of pet the system is displaying if they're all in the same Pet array?_ Let's add an attribute called _petType_ to the Pet class, and create a getter and setter for it. Now Dog and Cat can keep track of their type so the end user isn't confused. Modify the Cat and Dog constructors (all of them) so that they also set the _petType_ to cat (in the Cat class) or dog (in the dog class). This can be hardcoded, and you shouldn't have to pass the parameterized constructors the pet type.

### Step 4
Hopefully you've noticed that printCatStats and printDogStats have the same functionality. Let's add that to the Pet Class too, and we'll call it printPetInfo instead. You can copy the cout statement from either cat or dog, _but_ you need to change the word at the front (\ncat)(\ndog) to a call to getPetType() instead.

### Step 5
Modify your Cat and Dog classes so that the print function is no longer in the Cat or Dog .h and .cpp files- we're going to inherit it from Pet. Your header files and cpp files for dog and cat should now only contain constructors. Edit the makefile a bit more, and let's add the Pet.o object to it, as well as the final _Pet\_Shop_ executable and run it. Fix any bugs you may have accidentally generated.

### Step 6
Phew, that was a lot of work, but now newDriver.cpp can add Cats and Dogs to the same array (rather than having to have two different arrays), and they will print the appropriate information still (just from Pet). We have one last thing to do. The pet shop wants to print the pets from lowest to highest cost. To do this, let's modify the _bubbleSort_ method in newDriver.cpp. 

_bubbleSort_
**Input Parameters**: unsorted array of Pets;
**Returned Output**: None
**Functionality**: This function will compare the cost of each Pet, to the cost of every other Pet. If a pet's cost earlier in the array (at a lower index) is higher than a pet cost it's being compared to, swap the Pets at those elements using a temporary Pet variable to store the earlier element, change the contents of the earlier element to the later element, and finall change the contents of the later element to the temporary variable. [This](https://www.studytonight.com/data-structures/bubble-sort) is a good resource on how to bubble sort. 

### Step 7
Once bubble sort is properly implemented, run your makefile again. Pet information should now be printed from newDriver.cpp in order of pet cost. If your output matches the supplied _PetShop_ executable's, submit the assignment!

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
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.

