int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A;
    if(n==0 || n==1)
    return n;
    int start=0,end=n,ans,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid<=n/mid)
        {
            start=mid+1;
            ans=mid;
        }
        else
        end=mid-1;
    }
    return ans;
}
