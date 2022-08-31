// By: Winston Yan
// On: 6/1/2022
//For: CS 202 Assignment 5

#include "student.h"
#include "instructor.h"
#include "course.h"

#include <fstream>


int getMenuChoice() {
    int choice = 0;
    std::cout << MENU << std::endl;
    std::cin >> choice;
    while (choice > 8 || choice < 0) {
        std::cout << "Please enter a valid option" << std::endl;
        std::cout << MENU << std::endl;
        std::cin >> choice;
    }
    return choice;
}

template <typename T>
void printGeneric(T person) {
    std::cout.width(8);
    std::cout << std::left << person.getFirstName();
    std::cout.width(8);
    std::cout << std::left << person.getLastName();
}

template <typename T>
int getPersonOption(int size, T person[]) {
    int choice;
    std::cout << "Option  First   Last\n======================" << std::endl;
    std::string counter;
    for (int i=0; i<size; i++) {
        counter = std::to_string(i+1) + ".";
        std::cout.width(8);
        std::cout << std::left << counter;
        std::cout.width(8);
        std::cout << std::left << person[i].getFirstName();
        std::cout.width(8);
        std::cout << std::left << person[i].getLastName() << std::endl;
    }

    std::cout << "Choose the person option number: ";
    std::cin >> choice;
    return choice-1;
}

template <typename T>
void addCourses(T& target) {
    int numNewCourses;

    std::cout << "How many courses would you like to add? ";
    std::cin >> numNewCourses;
    int initialNC = target.getNumCourses();
    if (numNewCourses + target.getNumCourses() <= 4) {
        for (int i=initialNC; i < numNewCourses+initialNC; i++) {
            std::string pfx, nme;
            int num;

            std::cout << "Enter the course prefix, number, and name: ";
            std::cin >> pfx >> num;
            getline(std::cin, nme);
            nme.erase(0,1);
            Course temp(pfx, num, nme);
            if (!target.addCourse(temp)) {
                std::cout << target.getFirstName() << " " << target.getLastName() << " might have too many classes!" << std::endl;
            }
            target.setNumCourses(i+1);
        }
    } else {
        std::cout << "They have too many courses!" << std::endl;
    }
    target.calculateMoney(target.getNumCourses(), 0.00);
    std::cout << "Money: $" << target.getMoney() << std::endl;
}


int getInstructors(int maxSize, Instructor instructors[], std::string filename) {
    int counter = -1;
    int cycle = 0;

    std::fstream fin;
    fin.open(filename);
    
    if (fin.is_open()) {
        counter++;
        std::string temp;
        while (fin.good()) {
            fin >> temp;

            bool t;

            switch (cycle) {
                case 0: 
                    instructors[counter].setLastName(temp);
                    break;
                case 1:
                    instructors[counter].setFirstName(temp);
                    break;
                case 2:
                    instructors[counter].setSalary(std::stof(temp));
                    break;
                case 3:
                    if (std::stoi(temp) == 1) {
                        t = true;
                    } else {
                        t = false;
                    }
                    instructors[counter].setHasPhd(t);
                    break;
                case 4:
                    bool t;
                    if (std::stoi(temp) == 1) {
                        t = true;
                    } else {
                        t = false;
                    }
                    instructors[counter].setIsProf(std::stof(temp));
                    break;
                temp = "";
            }

            if (cycle != 4) {
                cycle++;
            } else {
                cycle = 0;
                counter++;
            }
        }
        fin.close();
    } else {
    
        std::cout << "Sorry, could not open " << filename << " for reading" << std::endl;
    
    }
    return counter;
}

Instructor findMedianSalary(int size, Instructor instructors[]) {
    //bubble sort woo hoo :(
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1; j++){
            if(instructors[j].getSalary() > instructors[j+1].getSalary()){
                Instructor temp = instructors[j];
                instructors[j] = instructors[j+1];
                instructors[j+1] = temp;
            }
        }
    }

    if (size%2 == 0) {
        return instructors[(size-1)/2];
    } else {
        return instructors[size/2];
    }
}

void printInstructorTable(int size, Instructor instructors[]) {
    std::cout << "First         Last          Title" << std::endl;
    std::cout << "==========================================" << std::endl;

    for (int i=0; i<size; i++) {
        std::string title = "Lecturer";

        if (instructors[i].getProf() && instructors[i].getPhd()) {
            title = "Professor/Doctor";
        } else if (instructors[i].getProf()) {
            title = "Professor";
        } else if (instructors[i].getPhd()) {
            title = "Doctor";
        }

        printGeneric(instructors[i]);
        std::cout << title << std::endl;
    }

    std::cout << std::endl;
}



int getStudents(int maxSize, Student students[], std::string filename) {
    int counter = -1;
    int cycle = 0;

    std::fstream fin;
    fin.open(filename);
    
    if (fin.is_open()) {
        counter++;
        std::string temp;
        while (fin.good()) {
            fin >> temp;

            switch (cycle) {
                case 0: 
                    students[counter].setNum(std::stoi(temp));
                    break;
                case 1:
                    students[counter].setLastName(temp);
                    break;
                case 2:
                    students[counter].setFirstName(temp);
                    break;
                case 3:
                    students[counter].setGpa(std::stof(temp));
                    break;
            }

            if (cycle != 3) {
                cycle++;
            } else {
                cycle = 0;
                counter++;
            }
        }
        fin.close();
    } else {
    
        std::cout << "Sorry, could not open " << filename << " for reading" << std::endl;
    
    }
    return counter;
}

Student findMaxStudent(int size, Student students[]) {
    Student highestStudent = students[0];

    for (int i=0; i<size; i++) {
        if (students[i].getGpa() > highestStudent.getGpa()) {
            highestStudent = students[i];
        }
    }
    return highestStudent;
}

void printStudentTable(int size, Student students[]) {
    std::cout << "First   Last    Number" << std::endl;
    std::cout << "======================" << std::endl;

    for (int i=0; i<size; i++) {
        printGeneric(students[i]);
        std::cout.width(10);
        std::cout << std::left << students[i].getNumber() << std::endl;
    }

    std::cout << std::endl;
}





int main(int argc, char** argv) {
    int choice;
    int i;
    if (argc == 3) {
        bool run = true;
        Instructor instructors[BUFFER_SIZE];
        Student students[BUFFER_SIZE];

        int sizeInstructors = getInstructors(BUFFER_SIZE, instructors, argv[2]);
        int sizeStudents = getStudents(BUFFER_SIZE, students, argv[1]);

        if (sizeStudents != -1 && sizeInstructors != -1) {
            while (run) {
                switch (getMenuChoice()) {
                    case 0: {
                        run = false;
                        break;
                    }
                    case 1: {
                        printStudentTable(sizeStudents, students);
                        break; 
                    }
                    case 2: {
                        choice = getPersonOption(sizeStudents, students);
                        addCourses(students[choice]);
                        break;
                    }
                    case 3: {
                        i = getPersonOption(sizeStudents, students);
                        students[i].printSchedule();
                        students[i].calculateMoney(students[i].getNumCourses(), 0.00);
                        std::cout << "Money: $" << students[i].getMoney() << std::endl;
                        break;
                    }
                    case 4: {
                        Student highest = findMaxStudent(sizeStudents, students);
                        std::cout << std::endl << "The student with the highest gpa is: " << highest.getFirstName() << " " << highest.getLastName() << std::endl;
                        break;
                    }
                    case 5: {
                        printInstructorTable(sizeInstructors, instructors);
                        break; 
                    }
                    case 6: {
                        choice = getPersonOption(sizeInstructors, instructors);
                        addCourses(instructors[choice]);
                        break;
                    }
                    case 7: {
                        i = getPersonOption(sizeInstructors, instructors);
                        instructors[i].printTeachingSchedule();
                        instructors[i].calculateMoney(instructors[i].getNumCourses(), 0.00);
                        std::cout << "Money: $" << instructors[i].getMoney() << std::endl;
                        break;
                    }
                    case 8: {
                        Instructor medianest = findMedianSalary(sizeInstructors, instructors);
                        std::cout << std::endl << "The teacher with the medianest salary is: " << medianest.getFirstName() << " " << medianest.getLastName() << std::endl;
                        break;   
                    }                 
                    default: {
                        std::cout << "Please enter a valid option" << std::endl;
                    }
                }
            }
            return 0;
        } else {
            std::cout << "Sorry, could not read files" << argv[1] << " and/or " << argv[2] << "for reading." << std::endl;
            return 1;
        }
    } else {
        std::cout << "Correct Usage:\n./deptMgmt filename1 filename2" << std::endl;
        return 1;
    }
}