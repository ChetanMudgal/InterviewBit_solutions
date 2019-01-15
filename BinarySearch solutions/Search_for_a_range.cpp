int search(const vector<int>&A,int key,bool first)
{
    int start=0;
    int end=A.size()-1;
    int mid;
    int res=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(A[mid]==key)
        {
            res=mid;
            if(first==true)
                end=mid-1;
            else
                start=mid+1;
        }
        else if(key<A[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return res;
}
vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int>ans;
    ans.push_back(search(A,B,true));
    ans.push_back(search(A,B,false));
    return ans;
}
