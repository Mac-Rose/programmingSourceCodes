#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *reverse(ListNode *head)
{
    ListNode *temp = head;
    ListNode *prev = head;
    ListNode *cur = head;
    while (temp != NULL)
    {
        if (temp == head)
        {
            temp = head->next;
            head->next = NULL;
        }
        else
        {
            cur = temp->next;
            temp->next = prev;
            prev = temp;
            if (cur != NULL)
                temp = cur;
            else
                break;
        }
    }
    return temp;
}
void reorderList(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL)
    {
        if (fast->next != NULL)
            fast = fast->next;
        else
            break;
        if (fast->next != NULL)
            fast = fast->next;
        else
            break;
        slow = slow->next;
    }
    ListNode *mid = slow->next;
    ListNode *cur = head;
    ListNode *temp = head;
    mid = reverse(mid);
    slow->next = mid;
    while (head != NULL and mid != NULL)
    {
        temp = head->next;
        head->next = mid;
        cur = mid->next;
        mid->next = temp;
        mid = cur;
        head = temp;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ListNode *fifth = new ListNode(5);
    ListNode *fourth = new ListNode(4, fifth);
    ListNode *third = new ListNode(3, fourth);
    ListNode *second = new ListNode(2, third);
    ListNode *head = new ListNode(1, second);
    reorderList(head);
}