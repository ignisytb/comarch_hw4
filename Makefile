CC = g++

all: Exe clean

Exe : main.o structs.o L1.o L2.o Mem.o
	$(CC) -o exec/runfile structs.o L1.o L2.o Mem.o main.o

main.o : src/headers/L1.h src/headers/Mem.h src/codes/main.cpp
	$(CC) -c src/codes/main.cpp

L1.o : src/headers/L2.h src/headers/L1.h src/codes/L1.cpp
	$(CC) -c src/codes/L1.cpp

L2.o : src/headers/structs.h src/headers/L2.h src/codes/L2.cpp
	$(CC) -c src/codes/L2.cpp

structs.o : src/headers/structs.h src/codes/structs.cpp
	$(CC) -c src/codes/structs.cpp

Mem.o : src/headers/L1.h src/headers/L2.h src/headers/Mem.h src/codes/Mem.cpp
	$(CC) -c src/codes/Mem.cpp

clean:
	rm -rf *.o