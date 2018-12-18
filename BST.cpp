#include "BST.h"

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
    else if (currNode->key > data) {
        currNode->left = Insert_helper(data, currNode->left, newNode);
    }
    //currNode data is less then data
    else if (currNode->key < data) {
        currNode->right = Insert_helper(data, currNode->right, newNode);
    }

    // return currNode to build back tree.
    return currNode;
}

//Post: successor node returned
template <class dataType>
BSTNode<dataType>* Successor(BSTNode<dataType>* currNode) {
    // Check if currNode is null
    if (nullptr == currNode) {
        return nullptr;
    }

    BSTNode<dataType>* temp = currNode;

    //Go all the way to the left
    while (nullptr != temp->left) {
        temp = temp->left;
    }

    return temp;
}

template <class dataType>
bool BST<dataType>::Remove(dataType data) {
    //return value if successfully removed data
    bool success = false;
    //Check if tree is empty
    if (nullptr == root) {
        return success;
    }
    else {
        root = Remove_helper(data, root, success);
        return success;
    }
}

template <class dataType>
BSTNode<dataType>* Remove_helper(dataType data, BSTNode<dataType>* currNode, bool & success) {
    //Not found
    if (nullptr == currNode) {
      return nullptr;
    }
    //Recursively search down the tree
    else if (currNode->key > data) {
        currNode->left = Remove_helper(data, currNode->left, success);
    }
    else if (currNode->key < data) {
        currNode->right = Remove_helper(data, currNode->right, success);
    }
    //Found data, attempt to remove it from tree
    else {
        success = true;
        //node has only one child: left
        if (nullptr == currNode->right) {
            BSTNode<dataType>* temp = currNode->left;    // node to return
            delete currNode;
            return temp;
        }
        //node has only one child: left
        else if (nullptr == currNode->left) {
            BSTNode<dataType>* temp = currNode->right;    // node to return
            delete currNode;
            return temp;
        }
        //node has two children, thus need to find successor
        //Grab Successor node
        BSTNode<dataType>* SuccNode = Successor(currNode->right);

        currNode->key = SuccNode->key;  //Swap key
        
        currNode->right = Remove_helper(SuccNode->key, currNode->right, success);
    }
    return currNode;
}