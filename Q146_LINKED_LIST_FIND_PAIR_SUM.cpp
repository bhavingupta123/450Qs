int findpair(Node *head , int x)
{
	int i=0,j,k;
	Node *first = head;
	Node *second = head;
	
	while(second->next!=NULL)
		second = second->next;
	
	while(first!=NULL && second!=NULL && first!=second && second->next!=first)
	{
		if((first->data + second->data) == x)
		{
			cout<<first->data<<" "<<second->data<<"\n";
			i=1;
			first = first->next;
			second = second->prev;
		}
		
		else if((first->data + second->data)<x)
			first = first->next;
		else
			second = second->prev;
			
	}
	
	if(i==0)
		cout<<"No pair found";
}