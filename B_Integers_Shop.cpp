#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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
        int mi = INT64_MAX, ma = INT64_MIN;
        map<int, set<pii>> m1;
        map<int, set<pii>> m2;
        map<pii, set<int>> mex;
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            m1[a].insert({c, i});
            m2[b].insert({c, i});
            mex[{a, b}].insert(c);
            if (a <= mi)
                mi = a;
            if (b >= ma)
                ma = b;

            if (mex.find({mi, ma}) != mex.end() and *mex[{mi, ma}].begin() < m1[mi].begin()->F + m2[ma].begin()->F)
                cout << *mex[{mi, ma}].begin();
            else
                cout << m1[mi].begin()->F + m2[ma].begin()->F;
            cout << endl;
        }
    }
}