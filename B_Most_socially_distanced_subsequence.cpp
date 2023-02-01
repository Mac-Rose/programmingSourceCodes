#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        stack<int> st;
        int sta = 0; //if sta == -1 last trend was decreasing else last trend was increasing
        st.emplace(v[0]), st.emplace(v[1]);
        if (v[1] - v.front() > 0)
            sta = 1;
        else
            sta = -1;
        for (int i = 2; i < n; i++)
        {
            if (sta > 0)
            {
                if (st.top() < v[i])
                {
                    st.pop();
                    st.emplace(v[i]);
                }
                else
                {
                    st.emplace(v[i]);
                    sta = -1;
                }
            }
            else
            {
                if (st.top() > v[i])
                {
                    st.pop();
                    st.emplace(v[i]);
                }
                else
                {
                    st.emplace(v[i]);
                    sta = 1;
                }
            }
        }
        vi ans;
        cout << st.size() << endl;
        while (st.empty() == false)
        {
            ans.emplace_back(st.top());
            st.pop();
        }
        reverse(all(ans));
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}