# ProgrammingAssignment4

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Continued use of **class** building skills.
3.  Continued use of **class aggregation** skills.
3.  Provide practice with new **inheritance** skills.
### Important Notes:
1.	**Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For your testing purposes, the autograder will be comparing your output to that of the example executable.
2.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
3.	**Autograder**: The autograder is really finicky about loop input, so it only tests the original menu output. There aren't tests for each option, so be sure to double check each option's output and formatting.
4.  **Code Reuse**: You will (hopefully) notice that we're modifying the Student class to inherit certain properties from Person, so don't forget to move the appropriate properties from student to person so that both Student and Instructor can inherit them.
5.  **Looking Forward**: You will (hopefully) notice that a lot of functionality for student and instructor methods are similar, with one major difference- the type of object used in the accessed array. In our next assignments, we will remove these redundancies using overloading and templating.
## Program
Your project should include the following files:
- driver.cpp
- person.cpp
- person.h
- student.cpp
- student.h
- instructor.cpp
- instructor.h
- course.cpp
- course.h
- makefile  

Your executable should be named ```deptMgmt```
## Programming Problem
Write a program for loading student and instructor information from 2 different files. The name of both text files should be provided as a command line argument. If both filenames are not provided, an error message should be displayed to the user. If either file cannot be open for reading, an error message should be displayed to the user.

If the files can be opened for reading, each student should be read from the student file and each instructor should be read from the instructor file. The program should display the menu to the screen.

### The example executable:
An example executable is provided in this repository. You should be able to run it from your project folder.
If you encounter a “permission denied” error when attempting to run the executable, type ```chmod u+x studentExecutable``` into the terminal and try running the executable again  
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function should check for the correct number of command line arguments and display an error message (including the program name) if necessary. It should load the students from the file. It should display the program menu and get the user's choice. Based on the user's choice, it should call the appropriate functions and display the appropriate output.  

If the user chooses Option 1, the program should display the student table to the screen. If the user chooses Option 2, it should get the number of the chosen student from the user and allow the user to add classes to that student's schedule. If the user chooses Option 3, it should get the number of the chosen student from the user and display that student's schedule. If the user chooses Option 4, it should find the student with the largest GPA and display that student to the screen.

If the user chooses Option5, it should display the intructor table to the screen. If the user chooses Option 6, it should get the number of the chosen instructor from the user and allow the user to add classes to that instructor's coursesTaughtSchedule. If the user chooses 7, it should get the number of the chosen instructor from the user and display that instructors teaching schedule. If the user Chooses option 8, it should find the instructor with the median salary and display that instructor to the screen

In addition to the main functions, your driver should have at minimum 11 more functions (don't panic, you've already written the first 6 in PA3):

*getStudents()*  
**Input Parameters**: integer maximum size of the array, array of Students, string filename  
**Returned Output**: integer number of Students stored in the array  
**Functionality**: This function should accept a filename, an array of Students for storing each of the students, and a size parameter for the array of students. It should attempt to open the input file for reading. If it cannot open the input file for reading, it should display an error message (including the file name). If it can open the input file for reading, it should get each of the students from the file one at a time and store it into the array of Students. Finally, it should return the number of students it successfully pulled from the file.

*findMaxStudent()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: Student
**Functionality**: This function should accept an array of Students containing all the studnets. It should iterate through each Student to find the one which has the highest GPA. That Student should be returned to the calling function.

*printStudentTable()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: none  
**Functionality**: This function should display a table header and then each of the students available in the Student array.

*getMenuChoice()*  
**Input Parameters**: none    
**Returned Output**: integer user choice  
**Functionality**: This function should display the program title and menu options. It should get the user's menu choice and return it to the calling function.

*getStudentOption()*  
**Input Parameters**: integer number of students, array of Students  
**Returned Output**: integer student option  
**Functionality**: This function should display a table header and then each of the students available in the Student array, along with an option number. It should get the user's student option and return it to the calling function.  

*addCourses()*  
**Input Parameters**: a Student  
**Returned Output**: none  
**Functionality**: This function should accept a student as a parameter. If this student has less than the maximum number of classes then we can add courses, otherwise it should display that the student's schedule if full. When adding courses, the user should be prompted for the number of courses to add. If the number of new courses combined with the current number of courses is less than the maximum number of courses, then you can prompt the user for the course information for each course being adding to the schedule, otherwise display the number of remaining courses to the user.  

*getInstructors()*  
**Input Parameters**: integer maximum size of the array, array of Instructors, string filename  
**Returned Output**: integer number of Instructors stored in the array  
**Functionality**: This function should accept a filename, an array of Instructors for storing each of the instructors, and a size parameter for the array of instructors. It should attempt to open the input file for reading. If it cannot open the input file for reading, it should display an error message (including the file name). If it can open the input file for reading, it should get each of the instructors from the file one at a time and store it into the array of Instructors. Finally, it should return the number of instructors it successfully pulled from the file.

*findMedianSalary()*  
**Input Parameters**: integer number of instructors, array of Instructors  
**Returned Output**: Instructor
**Functionality**: This function should accept an array of Instructors containing all the instructors. Bubble sort should be used to store instructors in the order of lowest salary to highest salary. [Bubble sort](https://www.geeksforgeeks.org/bubble-sort/) can be accomplished by creating a nested for loop that iterates through every instructor, and then compares that instructor's salary it to every other instructor's, using the keyword ```swap``` when it finds that an earlier element is larger than one later in the array. At that point, all of your instructors will be sorted by salary from lowest (index 0) to highest (index n). To find the median, we need to find where the median index would be. There are two possibilities: 1) there are an odd number of indices, so the median index falls exactly at the middle (index 3 in an array of size 5 for example), or 2) there are an even number of indices and the median would fall between two Instructors (index 1.5 in an array of size 4). In possibility 1, we should take the number of instructors, add 1, and divide by 2 to get the median index. In possibility 2, we should simply divide the number of instructors by 2, which will give us the lower bound of the median range (index 1 in an array of size 4)- and we'll call that good enough since you can't find the average of two instructors. That median instructor should be returned to the calling function.

*printInstructorTable()*  
**Input Parameters**: integer number of instructors, array of Instructors  
**Returned Output**: none  
**Functionality**: This function should display a table header and then each of the instructors available in the instructor array.

*addCoursesTaught()*  
**Input Parameters**: an Instructor  
**Returned Output**: none  
**Functionality**: This function should accept an instructor as a parameter. If this instructor has less than the maximum number of classes allowed to be taught (4) then we can add courses to the courses taught array, otherwise it should display that the instructor's teaching schedule is full. When adding courses, the user should be prompted for the number of courses to add. If the number of new courses combined with the current number of courses is less than the maximum number of courses, then you can prompt the user for the course information for each course being adding to the schedule, otherwise display the number of remaining courses to the user.  

*getInstructorOption()*  
**Input Parameters**: integer number of instructors, array of Instructors  
**Returned Output**: integer instructor option  
**Functionality**: This function should display a table header and then each of the instructors available in the Instructor array, along with an option number. It should get the user's instructor option and return it to the calling function.  

```
person.h
```
**Functionality**: This file should contain the definition for the Person class, which includes the following attributes:  
```
string firstName
string lastName

```
```
person.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  

*print()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Person firstName, then the lastName with a space in between.

```

```
student.h
```
**Functionality**: This class should inherit from the Person class, and should contain the definition for the following attributes:
```
int number
int numCourses
float gpa
Course schedule array
```
```
student.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  
Note: Do not create setter functions for the Schedule and numCourses attributes. These attributes are set when adding classes.


*printSchedule()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Student's schedule. For the number of Courses in the schedule, it should print that course.

*addCourse()*  
**Input Parameters**: Course  
**Returned Output**: true or false for success  
**Functionality**: This function accept a Course as a parameter. If the current number of courses is less than the maximum number of courses, the new Course should be saved in the next available spot in the Schedule array and the current number of courses should be increased. If a course was added the function should return true, otherwise it should return false. 

```

```
instructor.h
```
**Functionality**: This class should inherit from the Person class, and should contain the definition for the following attributes and methods:  
```
Course courses taught array
int salary, numCourses
bool hasPhd, isProfessor
```
```
instructor.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  
Note: Do not create setter functions for the Schedule and numCourses attributes. These attributes are set when adding classes.


*printTeachingSchedule()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the instructor's teaching schedule. For the number of Courses in the teaching schedule, it should print that course.

*addCoursesTaught()*  
**Input Parameters**: Course  
**Returned Output**: true or false for success  
**Functionality**: This function accepts a Course as a parameter. If the current number of courses is less than the maximum number of courses taught (4), the new Course should be saved in the next available spot in the teaching schedule array and the current number of courses should be increased. If a course was added the function should return true, otherwise it should return false. 

```
course.h
```
**Functionality**: This file should contain the definition for the Course class, which includes the following attributes:  
```
string prefix
int number
string name
```
```
course.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  

*print()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Course prefix and number, a colon, then the Course name. 

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
