#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int data)
    {
        key = data;
        left = NULL;
        right = NULL;
    }
};

void display(Node *root)
{
    if (root == NULL)
        cout << -1 << ' ';
    else
    {
        cout << root->key << ' ';
        display(root->left);
        display(root->right);
    }
}
Node *constructor(vi &v, int n)
{
    Node *root = new Node(v.front());
    int idx = 1;
    stack<pair<Node *, int>> st; //first value contain address and second value contain state
    st.push({root, 1});
    while (st.empty() == false)
    {
        if (st.top().S == 1)
        {
            if (v[idx] != -1)
            {
                st.top().S++;
                st.top().F->left = new Node(v[idx]);
                st.push({st.top().F->left, 1});
            }
            else
                st.top().S++;
            idx++;
        }
        else if (st.top().S == 2)
        {
            if (v[idx] != -1)
            {
                st.top().S++;
                st.top().F->right = new Node(v[idx]);
                st.push({st.top().F->right, 1});
            }
            else
                st.top().S++;
            idx++;
        }
        else
            st.pop();
    }
    return root;
}
signed main()
{
    ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int n;
    cout << "Enter the no of nodes :\n";
    cin >> n;
    cout << "Enter the binary tree in Preorder form :\n";
    vi v(n);
    for (int &it : v)
        cin >> it;
    Node *root = constructor(v, n);
    cout << "Value to be checked :\n";
    display(root);
}