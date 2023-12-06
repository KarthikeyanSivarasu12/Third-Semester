// Find the Kth Smallest Element in a Binary Search Tree (BST):
// Given a BST, find the Kth smallest element in it. You are not allowed to modify the structure
// of the tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inordertraversal(struct TreeNode *root,int *array,int *index)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left!=NULL)
    {
        inordertraversal(root->left,array,&index);
    }

    array[*index]=root->val;
    (*index)++;

    if(root->right!=NULL)
    {
        inordertraversal(root->right,array,&index)
    }
}

int kthSmallest(struct TreeNode *root, int k)
{
    int result;
    int index=0;
    int *array;
    array=(struct Treenode *)malloc((k)*sizeof(struct TreeNode));
    inordertraversal(root,array,&index);
    result=array[k-1];
    return result;
}