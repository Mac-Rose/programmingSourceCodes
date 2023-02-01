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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v)
            cin >> it;
        int ans = 0;
        stack<int> st;
        st.push(-1);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            while (v[i] < st.top())
            {
                s.emplace(st.top());
                st.pop();
            }
            st.push(v[i]);
        }
        while (!s.empty())
        {
            while (st.top() > *s.begin())
            {
                s.emplace(st.top());
                st.pop();
            }
            st.emplace(*s.begin());
            s.erase(s.begin());
            ans++;
        }
        cout << ceil(ans * 1.0 / k) << endl;
    }
}