deptMgmt: driver.o student.o instructor.o course.o person.o
	g++ -o deptMgmt driver.o student.o instructor.o course.o person.o -std=c++11

driver.o: driver.cpp student.h instructor.h course.h
	g++ -c driver.cpp

instructor.o: instructor.cpp instructor.h course.h
	g++ -c instructor.cpp

student.o: student.cpp student.h course.h
	g++ -c student.cpp

course.o: course.cpp course.h
	g++ -c course.cpp

person.o: person.cpp person.h
	g++ -c person.cpp

clear:
	rm *.o