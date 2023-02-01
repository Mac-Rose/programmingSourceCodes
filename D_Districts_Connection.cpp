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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        map<int, vi> freq;
        for (int i = 1; i <= n; i++)
        {
            int g;
            cin >> g;
            freq[g].pb(i);
        }
        if (freq.size() == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            auto it = freq.begin();

            int k = it->S.front();
            it++;
            for (; it != freq.end(); it++)
            {
                for (auto &i : it->S)
                    cout << k << ' ' << i << endl;
            }
            auto y = freq.end();
            y--;
            k = y->S.front();
            y = freq.begin();
            for (int j = 1; j < y->S.size(); j++)
                cout << y->S[j] << ' ' << k << endl;
        }
    }
}