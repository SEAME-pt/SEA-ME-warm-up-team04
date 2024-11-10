CC=g++
CFLAGS=-c -Wall

all: main

main: main.o Car.o Vehicle.o Brake.o ElectricalSystem.o Engine.o FuelTank.o Wheel.o
	$(CC) $^ -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

Car.o: Car.cpp Car.hpp
	$(CC) $(CFLAGS) Car.cpp -o Car.o

Vehicle.o: Vehicle.cpp Vehicle.hpp
	$(CC) $(CFLAGS) Vehicle.cpp -o Vehicle.o

Brake.o: Brake.cpp Brake.hpp
	$(CC) $(CFLAGS) Brake.cpp -o Brake.o

ElectricalSystem.o: ElectricalSystem.cpp ElectricalSystem.hpp
	$(CC) $(CFLAGS) ElectricalSystem.cpp -o ElectricalSystem.o

Engine.o: Engine.cpp Engine.hpp
	$(CC) $(CFLAGS) Engine.cpp -o Engine.o

FuelTank.o: FuelTank.cpp FuelTank.hpp
	$(CC) $(CFLAGS) FuelTank.cpp -o FuelTank.o

Wheel.o: Wheel.cpp Wheel.hpp
	$(CC) $(CFLAGS) Wheel.cpp -o Wheel.o

clean:
	rm -f *.o main
