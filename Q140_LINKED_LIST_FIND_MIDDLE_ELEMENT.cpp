class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *fast , *slow;
        fast=head;
        slow=head;
        
        if(head!=NULL)
        {
            while(fast && fast->next!=NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
        
            return slow;
        }
        
        return slow;
    }
};