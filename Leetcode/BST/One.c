/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// struct TreeNode* bstToGst(struct TreeNode* root) {
    
// }

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode*search(struct TreeNode *root,int datatosearch)
{
    if(root->val==datatosearch||root==NULL)
    {
        return root;
    }

    else
    {
        if(datatosearch<root->val)
        {
            root->left=search(root->left,datatosearch);
        }
        else if(datatosearch>root->val)
        {
            root->left=search(root->right,datatosearch)
        }
    }
    return root;
}

int noofnodes(struct Treenode *root,int level)
{
    count=0;
    if(root==NULL)
    {
        return count;
    }
    else
    {
        if(root->left!=NULL)
        {
            count=noofnodes(root->left);
        }

        count++;

        if(root->right!=NULL)
        {
            count=noofnodes(root->right)
        }
    }
    return count;
}


struct TreeNode* bstToGst(struct TreeNode * root)
{
   
}