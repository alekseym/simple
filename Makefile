simple: simple.o
	g++ -o simple simple.o

simple.o: simple.cpp
	g++ -c simple.cpp
clean:
	rm *.o simple