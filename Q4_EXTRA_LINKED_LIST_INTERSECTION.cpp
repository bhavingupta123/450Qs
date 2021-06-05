//https://binarysearch.com/problems/Linked-List-Intersection
//MEDIUM

LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode* head = new LLNode(-1);
    LLNode* node = head;

    while (l0 != NULL && l1 != NULL) {
        if (l0->val < l1->val)
            l0 = l0->next;

        else if (l1->val < l0->val)
            l1 = l1->next;

        else {
            node->next = l0;
            node = node->next;
            l0 = l0->next;
            l1 = l1->next;
        }
    }

    node->next = NULL;

    return head->next;
}