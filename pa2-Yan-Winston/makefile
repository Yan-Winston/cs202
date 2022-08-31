# By: Winston Yan
# On: 6/4/2022
# For: CS 202 Programming Assignment 2

student_mgmt: driver.o student.o
	g++ -o student_mgmt driver.o student.o -std=c++11

driver.o: driver.cpp student.h
	g++ -c driver.cpp

student.o: student.cpp student.h
	g++ -c student.cpp

clear:
	rm *.o