int Solution::braces(string A) {
    stack<char>s;
    int n=A.length();
    int i=0;
    while(i<n)
    {
        char c=A[i];
        if(c=='('||c=='+'||c=='-'||c=='*'||c=='/')
        s.push(c);
        else if(c==')')
        {
            if(s.top()=='(')
            return 1;
            else
            {
                while(!s.empty()&&s.top()!='(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
        i++;
    }
    return 0;
}

