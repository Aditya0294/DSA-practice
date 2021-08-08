class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       if(!head) return;
        Node *odd=head, *evenhead=head->next, *even = evenhead;
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
    }
};