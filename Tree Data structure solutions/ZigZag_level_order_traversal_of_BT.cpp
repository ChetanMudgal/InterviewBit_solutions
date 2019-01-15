/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void zigzag(TreeNode *A,vector<vector<int>>&ans,bool forward,int level)
 {
    if(A==NULL)
    return;
    if(ans.size()<level)
    {
        vector<int>temp;
        ans.push_back(temp);
    }
    if(forward!=false)
        ans[level-1].push_back(A->val);
    else
        ans[level-1].insert(ans[level-1].begin(),A->val);
    zigzag(A->left,ans,!forward,level+1);
    zigzag(A->right,ans,!forward,level+1);
 }
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>>ans;
    zigzag(A,ans,true,1);
    return ans;
}
