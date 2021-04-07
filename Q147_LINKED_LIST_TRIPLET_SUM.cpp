int findpairsum(Node *first , Node *last , int x)
{
	int count =0;
	
	while(first!=NULL && second!=NULL && first!=last && second->next!=first)
	{
		if((first->data + second->data) == x)
		{
			count++;
			first = first->next;
			last = last->prev;
		}
		
		else if((first->data + second->data)> x)
			second = second->prev;
		else
			first = first->next;
	}
	
	return count;
}

int findtrippletsum(Node *head , int x)
{
	int i,j,k,count=0;
	
	Node *first=head , *second=head,*current;
	
	while(second!->next!=NULL)
		second = second->next;
	
	for(current=head;current!=NULL;current=current->next)
	{
		first=current->next;
		
		count+=findpairsum(first,second,(x-current->data));
	}
	
	return count;
}