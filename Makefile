CC = g++
CFLAGS = -std=c++11 -Wall

all: brazo_robotico

brazo_robotico: BrazoRobotico.o main.o
    $(CC) $(CFLAGS) -o brazo_robotico BrazoRobotico.o main.o

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
    $(CC) $(CFLAGS) -c BrazoRobotico.cpp

main.o: main.cpp BrazoRobotico.h
    $(CC) $(CFLAGS) -c main.cpp

clean:
    rm -f *.o brazo_robotico

test: brazo_robotico
    ./brazo_robotico

