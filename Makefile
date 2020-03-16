all: main.o allocators.o deallocators.o data.o programs.o computer.o debuggers.o
	g++ main.o allocators.o deallocators.o data.o programs.o computer.o debuggers.o -o main.out

main.o: main.cpp
	g++ -c main.cpp

allocators.o: allocators.cpp 
	g++ -c allocators.cpp 

deallocators.o: deallocators.cpp 
	g++ -c deallocators.cpp 
	
data.o: data.cpp 
	g++ -c data.cpp
	
programs.o: programs.cpp 
	g++ -c programs.cpp  
	
computer.o: computer.cpp 
	g++ -c computer.cpp 
	
debuggers.o: debuggers.cpp  
	g++ -c debuggers.cpp  
	
clean:
	rm *.o main.out

run: main.out
	./main.out
