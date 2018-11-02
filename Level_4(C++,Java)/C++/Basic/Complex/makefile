all: complex main 
	g++ Complex.o main.o -o main.out

complex:
	g++ -c Complex.cpp -o Complex.o

main:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o *.out
