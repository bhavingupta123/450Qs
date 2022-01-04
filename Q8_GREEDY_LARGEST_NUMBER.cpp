//https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1/?category[]=Greedy&category[]=Greedy&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]0difficulty[]1difficulty[]2page2category[]Greedy


class Solution{
public:
    string findLargest(int N, int S){
        // code here
        
        string str="";
        int i,j,k,n=0;
        
        if(S> 9*N)
            return "-1";
        
        if(S==0 && N>1)
            return "-1";
        
        while(n<N){
            
            if(S>=9){
                
                str+="9";
                S = S-9;
                ++n;
            }
            else if(S>0 && S<9){
                
                str+=to_string(S);
                S = S - S;
                ++n;
            }
            else{
                ++n;
                str+="0";
            }
        }
        
        return str;
    }
};