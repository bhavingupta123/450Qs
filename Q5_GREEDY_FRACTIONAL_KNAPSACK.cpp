//https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
   static  bool cmp(struct Item a ,struct Item b){
        
        double a1 = (double)a.value/(double)a.weight;
        double b1 = (double)b.value/(double)b.weight;
        
        return a1>b1;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
        int i,j,k,currw=0;
        double ans=0.0;
        
        sort(arr,arr+n,cmp);
        
        for(i=0;i<n;++i){
            
            if((currw + arr[i].weight)<=W){
                ans+=arr[i].value;
                currw += arr[i].weight;
            }
            else{
                
                int left = W - currw;
                
                ans+= arr[i].value * (double)left / (double)arr[i].weight;
                
                break;
            }
        }
        
        return ans;
    }
        
};