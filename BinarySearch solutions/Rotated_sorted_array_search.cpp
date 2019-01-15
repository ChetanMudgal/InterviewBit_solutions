int search1(const vector<int>&A,int start,int end,int key)
{
    if(start>end)
    return -1;
    else
    {
        int mid=start+(end-start)/2;
        if(A[mid]==key)
        return mid;
        else if(A[start]<=A[mid])//left half sorted
        {
            if(key>=A[start] && key<=A[mid])
            return search1(A,start,mid-1,key);
            else
            return search1(A,mid+1,end,key);
        }
        else//left half not sorted so right half must be sorted
        {
            if(key>=A[mid] && key<=A[end])
            return search1(A,mid+1,end,key);
            else
            return search1(A,start,mid-1,key);
        }
    }
}
int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return search1(A,0,A.size()-1,B);
}

