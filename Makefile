all: BrazoRobotico main

BrazoRobotico.o:BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

clean:
	rm -f *.o BrazoRobotico.o
test:

