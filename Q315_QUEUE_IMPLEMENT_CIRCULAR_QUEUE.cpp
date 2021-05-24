

int insert(int val)
{
	if((front==0 && rear == size-1) || (rear == (front-1)%(size-1))
	{
		return -1;
	}
	else
	{
		if(rear==-1)
		{
			front=rear=0;
		}
		else if(rear==size-1)
			rear=0;
		else
			rear++;
		
		q[rear]=x;
	}
}

int del()
{
	if(front==-1)
		return -1;
	
	else
	{
		a = q[front];
		
		if(front==rear)
			front=rear=-1;
		else if(front==max-1)
			front=0;
		else
			front++;
	}
	
	return a;
}