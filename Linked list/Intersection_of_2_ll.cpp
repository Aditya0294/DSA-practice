int n1=0;
    int n2=0;
    ListNode*l1=head1;
    ListNode*l2=head2;
    while(l1!=NULL)
    {
        n1++;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        n2++;
        l2=l2->next;
    }
    ListNode*d1=head1;
    ListNode*d2=head2;
    if(n1>n2)
    {
        int diff=n1-n2;
        while(diff--)
        {
            d1=d1->next;
        }
    }
    else
    {
        int diff=n2-n1;
        while(diff--)
        {
            d2=d2->next;
        }
    }
    while(d1!=NULL && d2!=NULL)
    {
        if(d1==d2)
        {
            return d1;
        }
        else
        {
            d1=d1->next;
            d2=d2->next;
        }
    }
    return NULL;
    
        
    }