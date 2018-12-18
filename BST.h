#ifndef BST_H
#define BST_H

#include "BSTNode.h"

/******************************************************************************
 * class BST
 *
 * Dscription: Implements the basic features that a binary search tree would
 * require.
 *
 * Data Fields:
 *  root (BSTNode *): root of the tree
 *
 * Public functions:
 *  Insert - inserts a data into the tree
 *  Remove - removes a data from the tree
 *
 ******************************************************************************/
template <class dataType>
class BST {
    
    private:
        BSTNode<dataType>* root;

    public:
        BST() {
            root = nullptr; 
        }

        /*
         *Funtion Name: getRoot
         *Purpose:      This function exists to get the root of bst.
         *Description:  This function returns the root of the bst.
         *Input:        None.
         *Output:       Node.
         *Result:       root is return to caller.
         *Side Effects: None.
         */
        BSTNode<dataType>* getRoot(); 

        /*
         *Funtion Name: Insert
         *Purpose:      This function exists to insert a node into a bst.
         *Description:  This function inserts a new node into the correct
         *              postion in the bst. If data to inseart exist then
         *              funtion returns the existing node corresponding
         *              to that data.
         *Input:        data: the data to insert into the tree.            
         *Output:       Node.
         *Result:       data is inserted into the tree if it doesn't exist
         *              alread.
         *Return:       Pointer to new node with data is returned to the caller
         */
        BSTNode<dataType>* Insert(dataType data);

        /*
         *Funtion Name: Remove
         *Purpose:      This function exists to remove a node from the bst.
         *Description:  This function removes a node from the bst if data is
         *              found to remove.
         *Input:        data: the data to remove from the tree.            
         *Output:       Node.
         *Result:       data is remove from the tree.
         *Return:       Return true if found and removed from tree.
         *              Return false if not found in tree
         */
        bool Remove(dataType data);
};

#endif
