
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout<<"\n";
}


class Solution
{
    public:

    Node* addOne(Node *head)
    {
        Node *curr , *last=NULL;

        curr=head;

        while(curr->next!=NULL)
        {
            if(curr->data !=9)
            {
                last=curr;
            }
            curr=curr->next;
        }

        if(curr->data!=9)
        {
            curr->data++;
            return head;
        }

        if(last==NULL)
        {
            last = new Node(0);
            last->data = 0 ;
            last->next=head;
            head=last;
        }

        last->data++;
        last = last->next;

        while(last!=NULL)
        {
            last->data=0;
            last= last->next;
        }

        return head;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}