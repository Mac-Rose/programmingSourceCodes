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
int longestValidParentheses(string s)
{
    if (s.size() < 2)
        return 0;

    stack<int> st;
    st.push(-1);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(i);
        else if (st.top() == -1)
            st.push(i);
        else if (s[st.top()] == '(')
            st.pop();
        else
            st.push(i);
    }
    int prev = n;
    int ans = 0;
    while (st.size())
    {
        ans = max(ans, prev - st.top() - 1);
        prev = st.top();
        st.pop();
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    longestValidParentheses("())");
}