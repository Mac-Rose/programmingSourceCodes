#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define Endl "\n"
#define S second
#define all(c) (c).begin(), (c).end()

struct node
{
    int data;
    node *link;
};

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    srand(time(NULL)); //for stress-testing
    ios::sync_with_stdio(0);

    int n;
    cout << "How many items you want to add in the list : ";
    cin >> n;
    node *head = NULL;
    head = new node();
    for (int i = 0; i < n; i++)
    {
        node *temp = NULL;
        temp = new node();
        if (i == 0)
        {
            int x;
            cin >> x;
            head->data = x;
            head->link = NULL;
        }
        else
        {
            int x;
            cin >> x;
            temp->data = x;
            temp->link = NULL;
        }
        node *temp2 = new node();
        temp2 = head;
        while (temp2 != NULL)
        {
            temp2 = temp2->link;
        }
        temp2 = temp;
    }
    cout << head->data;
    // node* temp2 = new node();
    // temp2 = head;
    // while (temp2 != NULL)
    // {
    //     cout << temp2->data << " ";
    //     temp2 = temp2->link;
    // }
}