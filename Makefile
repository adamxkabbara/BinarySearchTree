all: bst

bst: main.o BST.o
	g++ main.o BST.o -g -o bst

main.o: main.cpp
	g++ -g -c main.cpp

BST.o: BST.cpp
	g++ -g -c BST.cpp

clean:
	rm -rf *o bst
