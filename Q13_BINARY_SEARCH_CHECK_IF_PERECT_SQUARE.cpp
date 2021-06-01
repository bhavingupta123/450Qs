//https://binarysearch.com/problems/Check-if-Number-Is-Perfect-Square
//EASY

bool solve(int n) {
    
    int low=1,high=n;
    long long mid,ans;
    if(n==0 || n==1)
        return true;

    while(low<=high)
    {
        mid = (low+high)/2;
        ans = mid*mid;
        if(ans == n )
            return true;
        
        if(ans>n)
            high=mid-1;
        else
            low = mid + 1;
    }

    return false;
}