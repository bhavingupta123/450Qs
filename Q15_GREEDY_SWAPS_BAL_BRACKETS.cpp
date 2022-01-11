//https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1/?category[]=Greedy&category[]=Greedy&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]0difficulty[]1difficulty[]2page2category[]Greedy


class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        
        int i,j,k;
        
        int unb=0,op=0,cl=0,res=0;
        
        for(i=0;i<S.length();++i){
            
            if(S[i]=='[')
            {
                op++;
                
                if(unb>0){
                    res+=unb;
                    unb--;
                }
            }
            else if(S[i]==']'){
                cl++;
            }
            
            unb = cl-op;
        }
        
        return res;
    }
};