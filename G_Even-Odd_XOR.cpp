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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int ans = 0;
void DFS(TreeNode *root, int mi, int ma)
{
    if (!root)
        return;
    ans = max(abs(root->val - ma), abs(root->val - mi));
    ma = max(ma, root->val), mi = min(mi, root->val);
    DFS(root->left, mi, ma);
    DFS(root->right, mi, ma);
}
int maxAncestorDiff(TreeNode *root)
{
    int mi = root->val, ma = root->val;
    DFS(root, mi, ma);
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}