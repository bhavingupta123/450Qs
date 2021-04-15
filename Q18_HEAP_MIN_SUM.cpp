class Solution{   
public:
    string solve(int arr[], int n) {
        
        string res="";
        
        int i=n-1,j,k;
        sort(arr,arr+n);
        int carry=0;
        
        while(i>=0)
        {
            if(i==0)
                res = to_string(arr[i] + carry) + res;
            
            else
            {
                int sum = (arr[i] + arr[i-1] + carry)%10;
                res = to_string(sum) + res;
                carry = (arr[i] + arr[i-1] + carry)/10;
            }
            
            i-=2;
        }
        
        if(i==-1)
            res = to_string(carry) + res;
        
        while(res[0]=='0')
            res.erase(res.begin());
            
        return res;
    }
};
