// By: Winston Yan
// On: 6/4/2022
// For: CS 202 Programming Assignment 2

#include <iostream>
#include <string>
#include <fstream>

#include "student.h"

#define BUFFSIZE 100



int getStudents(int maxSize, Student students[], std::string filename) {
    int counter = 0;
    int cycle = 0;

    std::fstream fin;
    fin.open(filename);
    
    if (fin.is_open()) {
        std::string temp;
        while (fin.good()) {
            fin >> temp;

            switch (cycle) {
                case 0: 
                    students[counter].setNum(std::stoi(temp));
                    break;
                case 1:
                    students[counter].setLN(temp);
                    break;
                case 2:
                    students[counter].setFN(temp);
                    break;
                case 3:
                    students[counter].setGPA(std::stof(temp));
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

Student findMaxStudent(int size, const Student students[]) {
    Student highestStudent;
    Student testStudent;
    float highestGPA;

    for (int i=0; i < size; i++) {
        if (i == 0) {
            highestStudent = students[0];
            highestGPA = highestStudent.getGPA();
        } else {
            testStudent = students[i];
            if (highestGPA < testStudent.getGPA()) {
                highestStudent = testStudent;
                highestGPA = testStudent.getGPA();
            }
        }
    }

    return highestStudent;
}

void printStudentTable(int size, Student students[]) {
    std::cout << "First   Last    Number" << std::endl;
    std::cout << "======================" << std::endl;

    for (int i=0; i<size; i++) {
        students[i].print();
    }

    std::cout << std::endl;
}



int main(int argc, char *argv[]) {
    if (argc == 2) {
        
        int size;
        Student students[BUFFSIZE];

        size = getStudents(BUFFSIZE, students, argv[1]);
        printStudentTable(size, students);
        Student maxStudent = findMaxStudent(size, students);

        std::cout << "The student with the highest gpa is: " << maxStudent.getFN() << " " << maxStudent.getLN() << std::endl;

    } else {
        std::cout << "Correct usage:" << std::endl << "./studentsExecutable filename" << std::endl;
    }
    return 0;
}
