struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow = head, *fast = head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow)
        {
            slow = head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast = fast->next;
            }
            return fast;
        }
    }
    return NULL;
}