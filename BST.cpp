#include "BST.h"
#include "BSTNode.h"

template <class dataType>
BSTNode<dataType>* BST<dataType>::getRoot(){
    return root;
}

template <class dataType>
BSTNode<dataType>* BST<dataType>::Insert(dataType data) {

    //Check if tree is empty
    if (nullptr == root) {
        root = new BSTNode<dataType>(data);
        return root;
    }
    else {
        BSTNode<dataType>* newNode;
        root = Insert_helper(data, root, newNode);
        return newNode;
    }
}

template <class dataType>
BSTNode<dataType>* Insert_helper(dataType data, BSTNode<dataType>* currNode, BSTNode<dataType>* &newNode) {

    //Base case: found location to insert newNode
    if (nullptr == currNode) {
        newNode = new BSTNode<dataType>(data);
        return newNode;
    }
    //currNode data is greater then data
    else if (currNode->getKey() > data) {
        currNode->left = Insert_helper(data, currNode->left, newNode);
        currNode->left->parent = currNode;
    }
    //currNode data is less then data
    else if (currNode->getKey() < data) {
        currNode->right = Insert_helper(data, currNode->right, newNode);
        currNode->right->parent = currNode;
    }

    // return currNode to build back tree.
    return currNode;
}

template <class dataType>
dataType* BST<dataType>::Remove(dataType data) {

    return nullptr;
}

