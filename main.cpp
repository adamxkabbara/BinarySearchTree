#include <iostream>
#include "BST.cpp"

using namespace std;

template<class dataType>
void TestInsert_EmptyTree(BST<dataType> tree) {

    BSTNode<dataType>* curr = tree.Insert(3);

    if (curr->getKey() == 3) {
        cout << "TestEmptyTreeInsert: success!" << endl;
    }
    else {
        cout << "TestEmptyTreeInsert: fail!" << endl;
    }
}

template<class dataType>
void TestInsert_BuiltTree(BST<dataType> tree) {

    BSTNode<dataType>* curr = tree.Insert(1);
    curr = tree.Insert(2);
    curr = tree.Insert(3);
    curr = tree.Insert(4);
    curr = tree.Insert(-7);
    curr = tree.Insert(-8);
    curr = tree.Insert(-6);
    
    if (tree.getRoot()->getKey() == 1 
            && tree.getRoot()->right->getKey() == 2
            && tree.getRoot()->right->right->getKey() == 3
            && tree.getRoot()->right->right->right->getKey() == 4
            && tree.getRoot()->left->getKey() == -7
            && tree.getRoot()->left->left->getKey() == -8
            && tree.getRoot()->left->right->getKey() == -6) {
        cout << "TestEmptyTreeInsert: success!" << endl;
    }
    else {
        cout << "TestEmptyTreeInsert: fail!" << endl;
    }
}

int main() {

    BST<int> tree;

    TestInsert_EmptyTree(tree);
    TestInsert_BuiltTree(tree);



    return 0;
}
