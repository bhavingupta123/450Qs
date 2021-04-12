class Solution{
    public:
        
        vector <int> max_of_subarrays(int *arr, int n, int k){
        int i,j;
        std::deque<int> Qi(k);

        vector<int> ans;
        
        for(i=0;i<k;++i)
        {
           while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
                Qi.pop_back();
  
            Qi.push_back(i);
        }
        
        for (;i<n+1;++i) 
        {
            ans.push_back(arr[Qi.front()]);
      
            while ((!Qi.empty()) && Qi.front()<=i-k)
                Qi.pop_front(); 
           
            while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
                Qi.pop_back();
  
            Qi.push_back(i);
        }
        
        return ans;
    }
};