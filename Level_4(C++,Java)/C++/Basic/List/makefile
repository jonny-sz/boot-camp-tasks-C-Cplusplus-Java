all: list main 
	g++ List.o main.o -o main.out

list:
	g++ -c List.cpp -o List.o

main:
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o *.out
