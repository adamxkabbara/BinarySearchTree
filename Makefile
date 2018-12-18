all: bst

bst: BST.o main.o
	g++ BST.cpp main.cpp -g -o bst

BST.o: BST.cpp
	g++ -g -c BST.cpp

main.o: main.cpp
	g++ -g -c main.cpp

clean:
	rm -rf *o bst
