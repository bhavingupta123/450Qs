void MyQueue :: push(int x)
{
    arr[rear++]=x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    if(front==rear)
    {
        front=rear=0;
        return -1;
    }
    
    return arr[front++];
}