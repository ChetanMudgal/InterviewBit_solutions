/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> Solution::verticalOrderTraversal(TreeNode* A) {
    TreeNode *root=A;
    map<int,vector<int>>m;
    vector<vector<int>>ans;
    int hd=0;
    queue<pair<TreeNode*,int>>q;
    q.push(make_pair(root,hd));
    if(root==NULL)
    return ans;
    while(!q.empty())
    {
        pair<TreeNode*,int>temp=q.front();
        q.pop();
        hd=temp.second;
        TreeNode *node=temp.first;
        m[hd].push_back(node->val);
        if(node->left!=NULL)
        q.push(make_pair(node->left,hd-1));
        if(node->right!=NULL)
        q.push(make_pair(node->right,hd+1));
    }
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
