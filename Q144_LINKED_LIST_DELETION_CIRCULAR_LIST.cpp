void deleteCircularNode(Node *head)
{
	Node *temp = head,*last=head,*pres;
	
	if(head==NULL)
		return;
	
	if(head->data==key && head->next ==head)
	{
		free(head);
		head=NULL;
		return;
	}
	
	if(head->data == key)
	{
		while(last->next!=head)
			last=last->next;
		
		last->next = head->next;
		free(head);
		head=head->next;
	}
	
	while(last->next->data!=key && last->next!=head)
	{
		last = last->next;
	}
	
	if(last->next->data==key)
	{
		pres = last->next;
		last->next = pres->next;
		free(pres);
	}
}