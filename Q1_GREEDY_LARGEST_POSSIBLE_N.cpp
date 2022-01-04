//https://practice.geeksforgeeks.org/problems/largest-number-with-given-sum-1587115620/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy#		

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    
    string largestNumber(int n, int sum)
    {
        // Your code here
        
        if(sum> 9*n)
            return "-1";
        
        
        string num="";
        
        while(num.length()<n){
            
            if(sum>=9){
                num+="9";
                sum = sum-9;
            }
            
            else if(sum>0 && sum<9){
                num+=to_string(sum);
                sum = sum - sum;
            }
            else
                num+="0";
        }
        
        return num;
    }
};