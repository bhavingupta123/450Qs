//https://binarysearch.com/problems/Rotation-Groups

int solve(vector<string>& words) {
    
    unordered_set<string> vis;
    int i;
    for(string &str :words)
    {
        for(i=0;i<str.length();++i)
        {
            rotate(str.begin(),str.begin()+1 , str.end());
            if(vis.count(str))
                break;
        }
        vis.insert(str);
    }

    return vis.size();
}