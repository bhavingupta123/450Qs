class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j,k;
        queue<int> in ,out;
        stack<int> mystack;
        
        for(i=0;i<pushed.size();++i)
        {
            in.push(pushed[i]);
        }
        
        for(i=0;i<popped.size();++i)
        {
            out.push(popped[i]);
        }
        
        while(!in.empty())
        {
            int ele = in.front();
            in.pop();
            
            if(ele == out.front())
            {
                out.pop();
                
                while(!mystack.empty())
                {
                    if(mystack.top() == out.front())
                    {
                        mystack.pop();
                        out.pop();
                    }
                    else
                        break;
                }
            }
            else
                mystack.push(ele);
        }
        
        return (in.empty() && mystack.empty());
    }
};

/*2nd soln*/

class Solution {
public:
    bool validateStackSequences(vector<int>& A, vector<int>& B) {
        int j=0;
        stack<int>s;
        for(int i=0;i<A.size();i++)
        {
            s.push(A[i]);
            if(s.top()==B[j])
            {
                while( !s.empty() && j<B.size() && s.top()==B[j])
                {
                    s.pop();
                    j++;
                }
            }
        }
        return s.empty()? true: false;
    }
};