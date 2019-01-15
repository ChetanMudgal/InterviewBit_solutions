int search(vector<int>A,int start,int end,int x)
{
    int mid;
    mid=start+(end-start)/2;
    if(start<=end)
    {
        if(x<A[mid])
        return search(A,start,mid-1,x);
        else if(x>A[mid])
        return search(A,mid+1,end,x);
        else
        return 1;
    }
    else
    return 0;
}
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=B;
    int rows=A.size();
    int cols=A[0].size();
    for(int i=0;i<rows;i++)
    {
    	if((A[i][0]<=n) && (A[i][cols-1]>=n))
        {
            if(search(A[i],0,cols-1,n))
            return 1;
            else
            return 0;
        }
    }
    return 0;
}
