//https://practice.geeksforgeeks.org/problems/e47329920b4e75869ea7b0e9b7c59ea145ccc22c/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        
        int i,j,cnt=0;
        
        for(i=0;i<n;++i){
            
            if(arr[i]=='P'){
                
                for(j=i-k;j<=i+k;++j){
                    
                    if(j>=0 && j!=i){
                        
                        if(arr[j]=='T')
                        {
                            arr[j]='C';
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
        
        return cnt;
        
    }
};


/*OR*/

int catchThieves(char arr[], int n, int k) 
    {
        queue<int>police; // queue to store index of police
        queue<int>chor;// queue to store index of thief
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='P')
            {
                police.push(i);
            }
            else
            {
                chor.push(i);
            }
        }
        int ans=0;
        while(police.empty()==false && chor.empty()==false)
        {
            if(abs(police.front()- chor.front())<=k)
            {//  if thief is within the reach of the policeman
                ans++;
                police.pop();
                chor.pop();
            }
            else if(police.front()<chor.front())
            //// thief lies beyond the reach of the current policeman
            {
                police.pop();
            }
            else
            {// thief is not reachable from any of the police
            //So pop thief
                chor.pop();
            }
        }
        return ans;
        // Code here 
    }