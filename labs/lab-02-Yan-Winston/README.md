[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=7906820&assignment_repo_type=AssignmentRepo)
# CS 202 Lab 2

### Learning Targets
* (CORE) I can create a makefile that compiles a simple application
* (CORE) I can refactor a single file application into multiple files

### Grading
This lab is graded on a "pass / needs work" basis. No partial credit is given. You have one redo after grading is complete to pass this lab.
## makefiles

The purpose of this lab is to give you experience in creating a makefile, as well as refactoring code from a single file into multiple cpp and header files.

This repository contains the main driver `averager.cpp`. The term "driver" is frequently used to identify the file that contains the `main` function in a program. For very small programs, the driver may contain all of the code for the program. Programs of any substantial size are broken into multiple files. This allows for easier development and debugging, and makes it possible to share code between projects. Your goal for this project is to modify the program so that the only code in the driver is the code that calls the provided functions. The functions themselves should reside in other files.

When you are done, your `main` function should look like this:

```
int main()
{
    sayHello();
    int nums[DATA_SIZE];
    for (int n = 0; n < DATA_SIZE; n++){
        *(nums + n) = n;
    }
    double average = calculateAverage(nums);
    cout << "Average Value: " << average << endl;
    return 0;
}
```

The functions `sayHello` and `calculateAverage` will be defined in files of your creation: `myfunctions.h` and `myfunctions.cpp`.

_Step 1_
Compile the code provided to ensure that there are no basic errors.

_Step 2_
Create the header and cpp files `myfunctions.h` and `myfunctions.cpp` and add them to the git repository.

_Step 3_
Move the function declarations to the .h file and the function implementations to the .cpp file.  Compile the `myfuncions.cpp` file and correct any errors that the compiler reports. You will need to compile the file using options that tell the compiler to generate an object file, not an executable. Once the code compiles, include the header file to `averager.cpp` and use the command line to compile it. 

_Step 4_
Edit the makefile adding the commands required to generate an executable. Your makefile should include a command called `clean` that removes all object files (.o) and the executable.

_Step 5_
Edit the README file to include your full name. Write a very short paragraph outlining any issues you had with the assignment.

Ensure that all your code has been added to git, and then commit and push your code to Github.





I, Winston Yan, did the edits on the code and the only issue I had was cloning the assignment due to git not finding/being able to access the repo, but otherwise it went fine (I bypassed this with a git extension for vscode)