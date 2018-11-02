all: point main 
	g++ Point.o main.o -o main.out

point:
	g++ -c Point.cpp -o Point.o

main:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o *.out
