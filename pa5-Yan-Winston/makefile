# By: Winston Yan
# On: 6/1/2022
#For: CS 202 Assignment 5

deptMgmtTemplated: driver.o student.o instructor.o course.o person.o
	g++ -o deptMgmtTemplated driver.o student.o instructor.o course.o person.o -std=c++11

driver.o: driver.cpp student.h instructor.h course.h person.h
	g++ -c driver.cpp

instructor.o: instructor.cpp instructor.h person.h
	g++ -c instructor.cpp

student.o: student.cpp student.h person.h
	g++ -c student.cpp

person.o: person.cpp person.h course.h
	g++ -c person.cpp

course.o: course.cpp course.h
	g++ -c course.cpp

clear:
	rm *.o