//https://binarysearch.com/problems/Replace-Linked-List-on-Index
//MEDIUM

LLNode* solve(LLNode* a, LLNode* b, int lo, int hi) {
   
    LLNode** p = &a;

    for (int i = 0; i < lo; ++i) 
        p = &(*p)->next;
   
    LLNode* tail = *p;

    for (int i = lo; i <= hi; ++i) 
        tail = tail->next;

    *p = b;

    while (*p) p = &(*p)->next;
        *p = tail;

    return a;
}