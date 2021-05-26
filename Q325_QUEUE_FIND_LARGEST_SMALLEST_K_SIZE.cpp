vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k)
{
    long long i=0,j=0,mine=INT_MAX,maxe=INT_MIN;
    vector<long long> v;
    deque<long long> q1;
    deque<long long> q2;

    while(j<n)
    {
        if(arr[j] < mine)
		{
			mine=arr[j];
			if(!q1.empty())
                q1.pop_back();
			q1.push_back(arr[j]);
		}

		if(arr[j] > maxe)
		{
			maxe=arr[j];
			if(!q2.empty())
                q2.pop_back();
			q2.push_back(arr[j]);
		}

        if(j-i+1<k)
            j++;

        else if(j-i+1 == k)
        {
            if(!q1.empty() && !q2.empty())
                v.push_back(q1.front() + q2.front());

            if(arr[i]==q1.front())
            {
				mine=INT_MAX;
                q1.pop_front();
            }
			if(arr[i]==q2.front())
            {
				maxe=INT_MIN;
                q2.pop_front();
            }

            i++;j++;
        }
    }

    return v;
}