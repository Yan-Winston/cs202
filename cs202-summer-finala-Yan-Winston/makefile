# By: Winston Yan
# On: 7/20/2022
#For: CS 202 Summer Final

foodEx: driver.o fridge.o condiments.o fruits.o food.o date.o 
	g++ -o foodEx driver.o -std=c++11

driver.o: driver.cpp fridge.h fruits.h condiments.h
	g++ -c driver.cpp

fridge.o: fridge.cpp fridge.h fruits.h condiments.h
	g++ -c fridge.cpp

condiments.o: condiments.cpp condiments.h food.h
	g++ -c condiments.cpp

fruits.o: fruits.cpp fruits.h food.h
	g++ -c fruits.cpp

food.o: food.cpp food.h date.h
	g++ -c food.cpp

date.o: date.cpp date.h
	g++ -c date.cpp

clear:
	rm *.o