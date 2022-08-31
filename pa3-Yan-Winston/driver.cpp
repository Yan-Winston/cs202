//  By: Winston Yan
//  On: June 13, 2022
// For: CS202 PA3

#include "student.h"
#include <fstream>


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

Student findMaxStudent(int size, Student students[]) {
    Student highestStudent = students[0];

    for (int i=0; i<size; i++) {
        if (students[i].getGPA() > highestStudent.getGPA()) {
            highestStudent = students[i];
        }
    }
    return highestStudent;
}

void printStudentTable(int size, Student students[]) {
    std::cout << "First   Last    Number" << std::endl;
    std::cout << "======================" << std::endl;

    for (int i=0; i<size; i++) {
        std::string numbering = std::to_string(i+1) + ".";
        std::cout.width(8);
        std::cout << std::left << numbering;
        students[i].print();
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

int getMenuChoice() {
    int choice = 0;
    std::cout << MENU << std::endl;
    std::cin >> choice;
    while (choice > 4 || choice < 0) {
        std::cout << "Please enter a valid option" << std::endl;
        std::cout << MENU << std::endl;
        std::cin >> choice;
    }
    return choice;
}

int getStudentOption(int size, Student students[]) {
    int choice;
    printStudentTable(size, students);

    std::cout << "Choose the student option number: ";
    std::cin >> choice;
    return choice-1;
}

void addCourses(Student& target) {
    int numNewCourses;

    std::cout << "How many courses would you like to add? ";
    std::cin >> numNewCourses;
    for (int i=0; i < numNewCourses; i++) {
        i += target.getNumCourse();
        std::string pfx, nme;
        int num;

        std::cout << "Enter the course prefix, number, and name: ";
        std::cin >> pfx >> num;
        getline(std::cin, nme);
        nme.erase(0,1);
        Course temp(pfx, num, nme);
        if (!target.addCourse(temp)) {
            std::cout << target.getFN() << " " << target.getLN() << " has too many classes!" << std::endl;
        }
    }
}



int main(int argc, char **argv) {
    if (argc == 2) {
        bool run = true;
        Student students[BUFF_SIZE];

        int size = getStudents(BUFF_SIZE, students, argv[1]);

        if (size != -1) {
            while (run == true) {
                switch (getMenuChoice()) {
                    case 1: {
                        printStudentTable(size, students);
                        break; 
                    }
                    case 2: {
                        addCourses(students[getStudentOption(size, students)]);
                        break;
                    }
                    case 3: {
                        students[getStudentOption(size, students)].printSchedule();
                        break;
                    }
                    case 4: {
                        Student highest = findMaxStudent(size, students);
                        std::cout << std::endl << "The student with the highest gpa is: " << highest.getFN() << " " << highest.getLN() << std::endl;
                        break;
                    }

                    case 0: {
                        run = false;
                        break;
                    }

                    default: {
                        std::cout << "Please enter a valid option" << std::endl;
                    }
                }
                std::cout << std::endl;
            }
        } else {
            std::cout << "Sorry, could not open " << argv[1] << " for reading" << std::endl;
        }

        return 0;
    } else {
        std::cout << "Correct usage" << std::endl << "./student_mgmt filename" << std::endl;
    }
}


