void nextpop(struct node* p , struct node** next)
{
    if(p)
    {
        nextpop(p->right,next);
        p->next = *next;
        *next = p;
        nextpop(p->left,next);
    }
}

void populateNext(struct node* p)
{
    struct node* next=NULL;
    nextpop(p, &next);
}