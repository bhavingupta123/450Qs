//https://binarysearch.com/problems/Task-Run

int solve(vector<int>& tasks, int k) {
    
   int curr=0;
   k+=1;
   unordered_map<int,int> mp;

   for(int t :tasks)
   {
       if(mp.count(t))
       {
           curr = max(curr,mp[t]+k);
       }
       mp[t]=curr++;
   }

   return curr;

