//QUESTION 1
// Find the Kth Smallest Element in a Binary Search Tree (BST):
// Given a BST, find the Kth smallest element in it. You are not allowed to modify the structure
// of the tree.

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void inordertraversal(struct TreeNode *root,int *array)
{
    int index=0;
    if(root->left!=NULL)
    {
        inordertraversal(root->left);
    }

    array[index]=root->data;
    index++;
    if(root->right!=NULL)
    {
        inordertraversal(root->left);
    }
}
 
int kthSmallest(struct TreeNode* root, int k)
{
    int *array;
    array=(struct TreeNode *)malloc((k+1)sizeof(struct TreeNode));
    
    inordertraversal(TreeNode,array);
    return array[k+1];
    
}