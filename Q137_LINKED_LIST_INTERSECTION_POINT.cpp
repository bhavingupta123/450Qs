// METHOD-1

/*
int intersectPoint(Node* head1, Node* head2)
{
    Node* ptr1 = head1;
    Node* ptr2 = head2;
  
   
    if (ptr1 == NULL || ptr2 == NULL) {
  
        return -1;
    }
  
    
    while (ptr1 != ptr2) {
  
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
  
       
  
        if (ptr1 == ptr2) {
  
            return ptr1->data;
        }
       
        if (ptr1 == NULL) {
  
            ptr1 = head2;
        }
        
        if (ptr2 == NULL) {
  
            ptr2 = head1;
        }
    }
    
    return -1;
}
*/


// METHOD-2

int getintersection(int d , Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    int i,j,k;
    for(i=0;i<d;++i)
    {
        if(temp1==NULL)
            return -1;
        
        temp1=temp1->next;
    }
    
    while(temp1 && temp2)
    {
        if(temp1==temp2)
            return temp1->data;
        
        temp1= temp1->next;
        temp2= temp2->next;
    }
}

int count(Node *temp)
{
    int cnt=0;
    while(temp)
    {
        cnt++;
        temp=temp->next;
    }
    
    return cnt;
}

int intersectPoint(Node* head1, Node* head2)
{
   Node *temp1=head1 , *temp2=head2;
   
   int cnt1,cnt2;
   cnt1= count(head1);
   cnt2= count(head2);
   
   if(cnt1>cnt2)
   {
       return getintersection((cnt1-cnt2) , head1,head2);
   }
   
   else
   {
       return getintersection((cnt2-cnt1) , head2,head1);
   }
}