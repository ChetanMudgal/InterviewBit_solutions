int min1(int a,int b)
{
    if(a<b)
    return a;
    else
    return b;
}
int max1(int a,int b)
{
    if(a<b)
    return b;
    else
    return a;
}
int Solution::trap(const vector<int> &A) 
{
    int n=A.size();
    if(n==0)
    return 0;
    vector<int>left(n);
    vector<int>right(n);
    left[0]=A[0];
    int i;
    for(i=1;i<n;i++)
    {
        left[i]=max1(left[i-1],A[i]);
    }
    right[n-1]=A[n-1];
    for(i=n-2;i>=0;i--)
    {
        right[i]=max1(right[i+1],A[i]);
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans + min1(left[i],right[i]) - A[i];
    }
    return ans;
}
