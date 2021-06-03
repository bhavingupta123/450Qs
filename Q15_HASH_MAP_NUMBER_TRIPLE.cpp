//A Number and Its Triple
//Given a list of integers nums, return whether there's two numbers such that one is a triple of another.
//EASY

bool solve(vector<int>& v) {
    
    unordered_set<int> s;
    
    for(int num:v)
    {
        if(s.find(num)!=s.end())
            return true;
        if(num%3==0)
            s.insert(num/3);
        s.insert(num*3);
    }
    
    return false;
}