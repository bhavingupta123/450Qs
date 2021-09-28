// 1_SORTING_QUICK_SORT.cpp
// https://www.interviewbit.com/tutorial/quicksort-algorithm/

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int low , int high){

	int i,j,k,index=low;
	int pivot = arr[high];

	for(i=low;i<high;++i){

		if(arr[i]<pivot)
		{
			swap(arr[i],arr[index]);
			index++;
		}
	}

	swap(arr[high] , arr[index]);

	return index;
}

int quicksort(int arr[] , int low , int high){

	if(low<high){
		int pivot_index  = partition(arr,low,high);
		quicksort(arr,low,pivot_index-1);
		quicksort(arr,pivot_index+1,high);
	}
}

int main() {
	// Your code goes here;

	int arr[5] = {5,4,3,2,1};
	int i,j,k;

	quicksort(arr,0,4);

	for(i=0;i<5;++i)
		cout<<arr[i]<<" ";


	return 0;
}
