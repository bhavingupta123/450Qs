void heap_form(int merged[] , int index , int n)
{
    if(index>=n)
        return;
        
    int l = 2*index + 1;
    int r = 2*index + 2;
    
    int max=index;
    
    if(l<n && merged[l] > merged[index])
        max = l;
    if(r<n && merged[r]>merged[max])
        max = r;
    
    if(max!=index)
    {
        swap(merged[max], merged[index]);
        heap_form(merged , max , n);
    }
    
}

void heapify(int merged[] , int n)
{
    int i,j,k;
    
    for(i=n/2 -1 ; i>=0 ; i--)
    {
        heap_form(merged , i ,n);
    }
}

void mergeHeaps(int merged[], int a[], int b[], int n, int m)
{
    int i,j,k=0;
    
    for(i=0;i<n;++i)
    {
        merged[k++] = a[i];
    }
    
    for(i=0;i<m;++i)
    {
        merged[k++] = b[i];
    }
    
    heapify(merged , n+m);
}