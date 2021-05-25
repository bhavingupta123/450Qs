#include<bits stdc++.h="">
using namespace std;

queue<int> interleave(queue<int> &q) {
	int n = q.size() / 2;
	queue<int> q1, q2;

	while(n--)
	{
		q1.push(q.front());
		q.pop();
	}

	while(!q.empty()) 
	{
		q2.push(q.front());
		q.pop();
	}

	while(!q1.empty() and !q2.empty()) 
	{
		q.push(q1.front());
		q1.pop();
		q.push(q2.front());
		q2.pop();
	}

	return q;
}