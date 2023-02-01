//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// } Driver Code Ends
// User function Template for C++

/*Link list node
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/

class Solution
{
public:
    Node *reverse(Node *head, Node *prev)
    {
        while (head != prev)
        {
            Node *temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        return prev;
    }
    Node *reverseBetween(Node *head, int m, int n)
    {
        Node *dummy = new Node(-1);
        dummy->next = head;

        Node *lsNxt = head;
        while (n--)
            lsNxt = lsNxt->next;

        Node *st = dummy;
        m--;
        while (m--)
        {
            st = st->next;
        }
        Node *temp = reverse(st->next, lsNxt);
        st->next = temp;
        return dummy->next;
    }
};

//{ Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, m, n;
        cin >> N >> m >> n;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++)
        {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else
            {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;

        Node *newhead = ob.reverseBetween(head, m, n);
        printList(newhead);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends