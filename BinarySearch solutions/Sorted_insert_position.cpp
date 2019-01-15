int search(vector<int>&A,int start,int end,int key)
{
    int res=0;
    int mid=start+(end-start)/2;
    if(start<=end)
    {
        if(key==A[mid])
        return mid;
        else if(key<A[mid])
        return search(A,start,mid-1,key);
        else
        return search(A,mid+1,end,key);
    }
    else
    {
        if(key==A[mid])
        return mid;
        else if(key<A[mid])
        return mid;
        else
        return mid+1;
    }
    return mid;
}
int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(B<A[0])
    return 0;
    else if(B>A[A.size()-1])
    return A.size();
    else
    return search(A,0,A.size()-1,B);
}
