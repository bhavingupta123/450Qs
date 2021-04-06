bool isPalindrome(Node *head)
{
    int arr[100],flag=1,i=0,k=0;
    struct Node * temp=head;
    
    while(temp!=NULL)
    {
        arr[i++]=temp->data;
        temp=temp->next;
    }
    
    for(k=0;k<(i/2);++k)
    {
        if(arr[k]!=arr[i-k-1])
        {
            flag=0;
            break;
        }
    }
    
    if(flag==0)
    return 0;
    
    else 
    return 1;
    
}