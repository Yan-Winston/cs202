rental_agency: driver.o agency.o car.o
	g++ -o rental_agency driver.o agency.o car.o

driver.o: driver.cpp agency.h
	g++ -c driver.cpp

agency.o: agency.cpp car.o agency.h
	g++ -c agency.cpp

car.o: car.cpp car.h
	g++ -c car.cpp

clean:
	rm *.o
