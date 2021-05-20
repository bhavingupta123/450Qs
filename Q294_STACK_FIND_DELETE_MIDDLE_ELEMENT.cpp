class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void deleting(stack<int>&s , int n , int curr)
    {
        if(s.empty() || curr==n)
        {
            return ;
        }
        
        int temp = s.top();
        s.pop();
        
        deleting(s,n,curr+1);
        
        if(curr!=n/2)
            s.push(temp);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        deleting(s,sizeOfStack,0);
    }
};