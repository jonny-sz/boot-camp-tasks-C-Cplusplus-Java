all: vector main 
	g++ Vector.o main.o -o main.out

vector:
	g++ -c Vector.cpp -o Vector.o

main:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o *.out
