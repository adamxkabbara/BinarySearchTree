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
        BSTNode<dataType>* Insert(dataType data);   
};
