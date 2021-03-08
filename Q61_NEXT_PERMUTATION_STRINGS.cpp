#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> nums)
    {// code here
        int idx = -1;
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            int prev = idx;
            for (int i = idx + 1; i < n; i++)
            {
                if (nums[i] > nums[idx - 1] && nums[i] <= nums[prev])
                {
                    prev = i;
                }
            }
            swap(nums[idx - 1], nums[prev]);
            reverse(nums.begin() + idx, nums.end());
        }
        return nums;
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}

