//https://leetcode.com/problems/all-paths-from-source-to-target/

class Solution {
public:
    
    void dfs(int k,vector<vector<int>>& graph,vector<int>&vis,vector<int> temp,vector<vector<int>> &ans){
        
        vis[k] = 1;
        temp.push_back(k);
        
        if(k == graph.size()-1){
            ans.push_back(temp);
            return;
        }
        
        for(auto elem : graph[k]){
            dfs(elem,graph,vis,temp,ans);
        }
        
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n,-1);
        vector<vector<int>> ans;
        vector<int> temp;
        
        dfs(0,graph,vis,temp,ans);
        
        return ans;
    }
};


/*OR*/

class Solution {
public:
    vector<vector<int>> res;
    vector<bool> vis;
    void dfs(vector<int>& x, vector<vector<int>>& a, int src, int target){
        // vis[src] = true;
        if(src == target){
            res.push_back(x);
        }
        for(auto i : a[src]){
            if(!vis[i]){
                x.push_back(i);
                vis[src] = true;
                dfs(x, a, i, target);
                vis[src] = false;
                x.pop_back();
            }
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        const int n = graph.size();
        vis.assign(n, false);
        vector<int> x;
        
        dfs(x, graph, 0, n - 1);
    
        for(int i = 0;i<res.size();i++){
            res[i].insert(res[i].begin(), 0);
        }
        
        return res;
    }
};