Reverse a Linked - List in groups of size k.

                   Ans.We can solve this by using recursion.We can make a recursive function which reverses initial k elements from head node and then recursively calls itself to get head of remaining reversed linked -
    list.Once our current k elements are reversed our last node will point to new head and our previous head should connect to the head of remaining list.Image
        Recursive Code -

    Node *reverseListGroups(Node *head, int k)
{
    Node *cur = head;
    Node *last = NULL;
    Node *next = NULL;

    int count = 0;
    while (cur != NULL && count < k)
    {
        next = cur->next;
        cur->next = last;
        last = cur;
        cur = next;

        count++;
    }

    if (next != NULL)
    {
        Node *rest_head = reverseListGroups(next, k);
        head->next = rest_head;
    }
    return last;
}

Iterative Code - 

Here in iterative code we use a variable to check if current pass is first pass and for first pass our last pointer will point to new head.
Also we maintain a prevFirst pointer which points to last node of previous pass and after every pass we connect current head to next of this prevFirst pointer.

Node *reverseListGroups(Node *head,int k)
{
    Node *cur = head, *prevFirst = NULL;
    bool isfirstpass = true;
    while (cur != NULL)
    {
        Node *first = cur;
        Node *last = NULL;

        int count = 0;
        while (cur != NULL && count < k)
        {
            Node *temp = cur->next;
            cur->next = last;
            last = cur;
            cur = temp;

            count++;
        }

        if (isfirstpass)
        {
            head = last;
            isfirstpass = false;
        }
        else
        {
            prevFirst->next = last;
        }
        prevFirst = first;
    }

    return head;
}

Time Complexity - O(n) Auxiliary Space - O(1)[Iterative]