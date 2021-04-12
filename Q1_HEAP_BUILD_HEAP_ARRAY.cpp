class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      int j,k,l,largest,r;
      
      largest= i;
      
      l = 2*i + 1;
      r = 2*i +2 ;
      
      if(l<n && arr[l]>arr[largest])
        largest = l;
    
      if(r<n && arr[r]>arr[largest])
        largest =r;
        
      if(largest!=i)
      {
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
      
      
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        int index = (n/2) - 1;
        int i,j,k;
        
        for(i=index;i>=0;--i)
        {
            heapify(arr,n,i);
        }
    }

   
}