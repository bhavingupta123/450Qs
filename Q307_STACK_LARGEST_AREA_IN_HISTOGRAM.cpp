class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    void computeleftsmall(vector<long long> & NSL,long long arr[],int n)
    {
        stack<long long> s;
        s.push(0);
        long long i,j,k;
        
        for(i=0;i<n;++i)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            
            if(s.empty())
                NSL.push_back(0);
            else
                NSL.push_back(s.top()+1);
            
            s.push(i);    
        }
    }
    
    void computerighttsmall(vector<long long> & NSL,long long arr[],int n)
    {
        stack<long long> s;
        s.push(n-1);
        long long i,j,k;
        
        for(i=n-2;i>=0;--i)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            
            if(s.empty())
                NSL.push_back(n-1);
            else
                NSL.push_back(s.top()-1);
            
            s.push(i);    
        }
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> NSR , NSL;
        
        computeleftsmall(NSL,arr,n);
        computerighttsmall(NSR,arr,n);
        reverse(NSR.begin(),NSR.end());
        long long area=0;
        
        for(long long i=0;i<n;++i)
        {
            area = max(area , ((NSR[i]-NSL[i]+1)*arr[i]));
        }
        return area;
    }
};




/* GFG SOLN*/

int getMaxArea(int hist[], int n)
{
    // Create an empty stack. The stack holds indexes 
    // of hist[] array. The bars stored in stack are 
    // always in increasing order of their heights.
    stack<int> s;
  
    int max_area = 0; // Initialize max area
    int tp;  // To store top of stack
    int area_with_top; // To store area with top bar
                       // as the smallest bar
  
    // Run through all bars of given histogram
    int i = 0;
    while (i < n)
    {
        // If this bar is higher than the bar on top 
        // stack, push it to stack
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);
  
        // If this bar is lower than top of stack, 
        // then calculate area of rectangle with stack 
        // top as the smallest (or minimum height) bar. 
        // 'i' is 'right index' for the top and element 
        // before top in stack is 'left index'
        else
        {
            tp = s.top();  // store the top index
            s.pop();  // pop the top
  
            // Calculate the area with hist[tp] stack 
            // as smallest bar
            area_with_top = hist[tp] * (s.empty() ? i : 
                                   i - s.top() - 1);
  
            // update max area, if needed
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
  
    // Now pop the remaining bars from stack and calculate
    // area with every popped bar as the smallest bar
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : 
                                i - s.top() - 1);
  
        if (max_area < area_with_top)
            max_area = area_with_top;
    }
  
    return max_area;
}