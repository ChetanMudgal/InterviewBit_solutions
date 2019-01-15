vector<int> Solution::prevSmaller(vector<int> &A) {
    int n=A.size();
    vector<int>ans(n,-1);
    stack<int>s;
    int i;
    for(i=0;i<n;i++)
    {
        while(!s.empty()&&s.top()>=A[i])
            s.pop();
        if(!s.empty())
            ans[i]=s.top();
        s.push(A[i]);
    }
    return ans;
}
