# By: Winston Yan
# On: 6/20/2022
# For: CS 202 Midterm

trainer_mgmt: driver.o pikachu.o pokemon.o trainer.o
	g++ -o trainer_manager driver.o pikachu.o pokemon.o trainer.o -std=c++11

driver.o: driver.cpp trainer.h pokemon.h pikachu.h
	g++ -c driver.cpp

pikachu.o: pikachu.cpp pikachu.h pokemon.h
	g++ -c pikachu.cpp

pokemon.o: pokemon.cpp pokemon.h
	g++ -c pokemon.cpp

trainer.o: trainer.cpp trainer.h pokemon.h
	g++ -c trainer.cpp

clear:
	rm *.o