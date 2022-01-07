//https://practice.geeksforgeeks.org/problems/binary-searchable-elements/1/?category[]=Greedy&category[]=Greedy&difficulty[]=1&difficulty[]=2&page=2&query=category[]Greedydifficulty[]1difficulty[]2page2category[]Greedy

class Solution {
  public:
    int binarySearchable(int arr[], int n) {
        // code here
        
        int i,j,k, minele=INT_MAX , maxele = INT_MIN ,cnt=0;
        
        int arr1[n],arr2[n];
        
        if(n<=1)
            return cnt;
        
        arr1[0]=arr[0];
        arr2[n-1] = arr[n-1];
        j=1;
        
        for(i=1;i<n;++i){
            arr1[j] = max(arr[i],arr[j-1]);
            j++;
        }
        
        j=n-2;
        
        for(i=n-2;i>=0;--i){
            arr2[j] = min(arr[i],arr2[j+1]);
            j--;
        }
        
        for(i=0;i<n;++i)
        {
            if(arr[i]>=arr1[i] && arr[i]<=arr2[i])
                ++cnt;
        }
        
        return cnt;
    }
};