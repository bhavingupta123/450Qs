#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int perm(string str ,int l ,int r,vector<string> &v)
{
    int i,j,k;
    if(l==r)
        {
            v.push_back(str);
        }
    
    else
    {
        for(i=l ; i<=r ;++i)
        {
            swap(str[l] , str[i]);
            perm(str , l+1 , r,v);
            swap(str[l] , str[i]);
        }
    }
    
}

int main() {
    int i,j,k,t;
    cin>>t;
    
    while(t--)
    {
        vector<string> v;
        string str;
    	cin>>str;
    	int n = str.length();
    	perm(str ,0 ,n-1,v);
    	sort(v.begin(), v.end());
    	
    	for (auto x : v) 
            cout << x << " ";
    	     
    	cout<<"\n";
    }

	return 0;
}