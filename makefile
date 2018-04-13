CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

LinkedList: main.o Node.o Stack.o
	$(CXX) $(CXXFLAGS) -o LinkedList main.o Node.o Stack.o

# The main.o target can be written more simply

main.o: main.cpp Node.h Stack.h

Node.o: Node.h
Stack.o: Stack.h Node.h

clean:
		rm -rf *.o
		rm LinkedList
