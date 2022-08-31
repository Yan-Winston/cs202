# By: Winston Yan
# On: 6/11/2022
# For: CS 202 Programming Assignment 3

student_mgmt: driver.o student.o course.o
	g++ -o student_mgmt driver.o student.o course.o -std=c++11

driver.o: driver.cpp student.h course.h
	g++ -c driver.cpp

student.o: student.cpp student.h course.h
	g++ -c student.cpp

course.o: course.cpp course.h
	g++ -c course.cpp

clear:
	rm *.o