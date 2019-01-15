/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==NULL)
    return NULL;
    TreeNode *root=A;
    while(root!=NULL)
    {
        if(root->left!=NULL)
        {
            TreeNode* rightmost=root->left;
            while(rightmost->right!=NULL)
                rightmost=rightmost->right;
            rightmost->right=root->right;
            root->right=root->left;
            root->left=NULL;
        }
        root=root->right;
    }
    return A;
}
