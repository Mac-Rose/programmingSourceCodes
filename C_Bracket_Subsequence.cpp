#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    int b = 0;
    vi v(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
        if (a[i] == '(')
            v[i] = b, b++, st.emplace(v[i]);
        else
            v[i] = st.top(), st.pop();

    for (auto &it : v)
        if (it < k / 2)
            cout << a[&it - &v[0]];
}