averager: averager.o myfunctions.o
	g++ -o averager averager.o myfunctions.o -std=c++11

myfunctions.o: myfunctions.cpp myfunctions.h
	g++ -c myfunctions.cpp

averager.o: averager.cpp myfunctions.h
	g++ -c averager.cpp

clean:
	rm *.o averager