vector<vector<int> > fourSum(vector<int> &arr, int ans) {
    
    int i,j,k,l,r,sum,n;
    n = arr.size();
    
    sort(arr.begin(),arr.end());

   set<vector<int>> ss;
   vector<vector<int>> vv ;

   for(i=0;i<n-3;++i)
   {
       for(j=i+1 ; j<n-2;++j)
       {
           l = j+1;
           r = n-1;

           while(l<r)
           {
               sum = arr[i] + arr[j] + arr[l] + arr[r];

               if(sum == ans)
               {
                   ss.insert({arr[i],arr[j],arr[l],arr[r]});
                   l++;
                   r--;
               }
               else if(sum<ans)
                l++;
               else
                r--;
           }
       }
   }
   
   for(auto x:ss)
    vv.push_back(x);
    
    return  vv;
}