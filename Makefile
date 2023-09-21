all: main.o

main.o: main.cpp BrazoRobotico.cpp BrazoRobotico.h
	g++ -o main.o main.cpp BrazoRobotico.cpp BrazoRobotico.h

clean:
	rm *.o

test: all
	./main.o
