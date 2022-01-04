//https://practice.geeksforgeeks.org/problems/geek-collects-the-balls5515/1/?category[]=Greedy&category[]=Greedy&difficulty[]=0&difficulty[]=1&difficulty[]=2&page=1&query=category[]Greedydifficulty[]0difficulty[]1difficulty[]2page1category[]Greedy#

int maxBalls(int n, int m, vector<int> a, vector<int> b){
        // code here
        
        int i=0,j=0,k,sum=0,rd=0,f=0,s=0,temp;
        
        while(i<n && j<m){
            
            if(a[i]<b[j]){
                f+=a[i++];
            }
            else if(a[i]>b[j])
                s+=b[j++];
            else{
                
                sum+=max(s,f)+a[i];
                s=f=0;
                temp=a[i++];
                j++;
                
                while(i<n && a[i]==temp)
                    sum+=a[i++];
                
                while(j<m && b[j]==temp)
                    sum+=b[j++];
                
            }
        }
        
        while(i<n)
            f+=a[i++];
        
        while(j<m)
            s+=b[j++];
        
        return max(f,s) + sum;
    }