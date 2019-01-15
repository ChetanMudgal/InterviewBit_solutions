stack<int>s;
stack<int>min1;
MinStack::MinStack() {
    while(!s.empty())
    s.pop();
    while(!min1.empty())
    min1.pop();
}

void MinStack::push(int x) {
    s.push(x);
    if(min1.size()==0)
    min1.push(x);
    else
    {
        if(x<=min1.top())
        min1.push(x);
        else if(x>min1.top())
        min1.push(min1.top());
    }
}

void MinStack::pop() {
    if(s.size()!=0)
    {
        s.pop();
    }
    if(min1.size()!=0)
    {
        min1.pop();
    }
}

int MinStack::top() {
	if(s.size()==0)
    return -1;
    else
    return s.top();
}

int MinStack::getMin() {
    if(min1.size()==0)
    return -1;
    else
    return min1.top();
}

