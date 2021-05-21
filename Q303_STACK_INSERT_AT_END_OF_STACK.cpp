void insertbottom(char x)
{
	if(s.empty())
		s.push(x);
	else
	{
		char stor = s.top();
		s.pop();
		insertbottom(x);
		s.push(stor);
	}
}