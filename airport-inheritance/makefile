student_mgmt: driver.o b737.o
	g++ -o airport driver.o b737.o -std=c++11

driver.o: driver.cpp b737.h airplane.h
	g++ -c driver.cpp

student.o: b737.cpp b737.h airplane.h
	g++ -c b737.cpp

clear:
	rm *.o