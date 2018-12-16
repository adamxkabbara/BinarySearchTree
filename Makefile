all: bst

bst: main.o BST.o
	g++ main.o BST.o -o bst

main.o: main.cpp
	g++ -c main.cpp

BST.o: BST.cpp
	g++ -c BST.cpp

clean:
	rm -rf *o bst