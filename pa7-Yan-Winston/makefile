deptMgmt: driver.o calculator.o
	g++ -o calculator driver.o calculator.o -std=c++11

driver.o: driver.cpp calculator.cpp
	g++ -c driver.cpp

complex.o: complex.cpp complex.h calculator.h
	g++ -c complex.cpp

calculator.o: calculator.cpp calculator.h
	g++ -c calculator.cpp

clear:
	rm *.o