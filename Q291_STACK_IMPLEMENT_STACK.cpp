void MyStack :: push(int x)
{
    if(top>=(1000))
        return ;
    
    else
        arr[++top] = x;
    
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
   if(top <0)
    return -1;
   else
   {
       return arr[top--];
   }
}