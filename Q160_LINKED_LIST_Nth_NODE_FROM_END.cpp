int getNthFromLast(Node *head, int n)
{
     Node *ahead = head , *follow=head;
     int cnt = 0;
     if(ahead)
     {
         while(cnt<n)
         {
             if(!ahead)
                return -1;
                
             ahead = ahead->next;
             cnt++;
         }
         
         while(ahead)
         {
             follow = follow->next;
             ahead = ahead->next;
         }
         
         return follow->data;
     }
}