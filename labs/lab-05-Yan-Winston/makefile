PetShop: newDriver.o Dog.o Cat.o Pet.o
	g++ -o PetShop newDriver.o Dog.o Cat.o Pet.o -std=c++11

newDriver.o: Dog.h Cat.h newDriver.cpp
	g++ -c newDriver.cpp

Pet.o: Pet.h Pet.cpp
	g++ -c Pet.cpp

Dog.o: Dog.h Dog.cpp
	g++ -c Dog.cpp

Cat.o: Cat.h Cat.cpp
	g++ -c Cat.cpp

clean:
	rm *.o Inefficient_Pet_Shop