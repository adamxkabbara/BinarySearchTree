/******************************************************************************
 *                                                              Adam Kabbara
 *                                                              12-15-2018
 *                          Binary Search Tree
 *class BSTNode
 *
 *Description: Implements the node of the binary search tree data structure.
 *  Each node had two children, the left child which contains data "less than"          
 *  the current data, the right child which contains data "greater than" the 
 *  current data, the parent which points to the parent of the current node.
 *
 *  Data Fields:
 *  key (int): holds data for the current node
 *  left (BSTNode*): left child
 *  right (BSTNode*): right child
******************************************************************************/
#ifndef BSTNODE_H
#define BSTNODE_H

template <class dataType>
class BSTNode {
    public:
        dataType key;
        BSTNode* right;
        BSTNode* left;
        BSTNode* parent;

        BSTNode(dataType data, BSTNode* right = nullptr, 
                BSTNode* left = nullptr, 
                BSTNode* parent = nullptr) {
            key = data;
        }
        dataType getKey() { return key; }
};

#endif
