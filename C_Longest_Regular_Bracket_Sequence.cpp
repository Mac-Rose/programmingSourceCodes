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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '(')
            st.push(i);
        else if (a[st.top()] == '(')
            st.pop();
        else if (a[st.top()] == ')')
            st.push(i);
        else
            st.push(i);
    }
    st.push(a.size());
    pii ans = {0, 1};
    while (st.size() > 1)
    {
        int x = st.top();
        st.pop();
        int y = x - st.top() - 1;
        if (y > ans.F)
            ans = {y, 1};
        else if (y == ans.F)
            ans.S++;
    }
    if (ans.F == 0)
        cout << "0 1";
    else
        cout << ans.F << ' ' << ans.S;
}