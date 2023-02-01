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
        string s, t, p;
        cin >> s >> t >> p;
        bool flag = true;
        map<int, int> freqt;
        for (int i = 0; i < t.size(); i++)
        {
            freqt[t[i]]++;
        }
        map<int, int> freqs;
        for (int i = 0; i < s.size(); i++)
        {
            freqs[s[i]]++;
        }
        map<int, int> freqp;
        for (int i = 0; i < p.size(); i++)
        {
            freqp[p[i]]++;
        }
        int k = 0;
        int n = s.size();
        for (int i = 0; i < t.size(); i++)
        {
            if (s[k] == t[i])
            {
                k++;
            }
            if (k == n)
                break;
        }
        if (k != n)
            flag = false;
        for (int i = 0; i < t.size() and flag == true; i++)
            if (freqs[t[i]] + freqp[t[i]] < freqt[t[i]])
                flag = false;
        (flag) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}