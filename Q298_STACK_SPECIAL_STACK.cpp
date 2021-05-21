void push(stack<int>& s, int a){
	
	if(s.empty())
	    s.push(a);
	else
	{
	    if(s.top()>a)
	        s.push(a);
	   else
	    s.push(s.top());
	}
}

bool isFull(stack<int>& s,int n){
	
	return s.size()==n? true:false;
}

bool isEmpty(stack<int>& s){
	return s.empty()==true? true:false;
}

int pop(stack<int>& s){
	if(!isEmpty(s))
	{
	    int top = s.top();
	    s.pop();
	    return top;
	}
}

int getMin(stack<int>& s){
    
    return pop(s);
}