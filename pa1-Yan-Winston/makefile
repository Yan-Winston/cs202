# By: Winston Yan
# On: 5/26/2022
# For: CS 202 Programming Assignment 1

text_analyzer: driver.o word_analyzer.o
	g++ -o text_analyzer driver.o word_analyzer.o -std=c++11

driver.o: driver.cpp word_analyzer.h
	g++ -c driver.cpp

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -c word_analyzer.cpp

clear:
	rm *.o