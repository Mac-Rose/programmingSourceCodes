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
        int n, k;
        cin >> n >> k;
        vi freq1(27), freq2(27);
        for (int i = 0; i < n; i++)
        {
            char it;
            cin >> it;
            freq1[it - 97]++;
        }
        for (int i = 0; i < n; i++)
        {
            char it;
            cin >> it;
            freq2[it - 97]++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq2[i] > freq1[i])
                flag = false;
            else
                freq1[i + 1] += ((freq1[i] - freq2[i]) / k) * k;
        }
        (flag) ? cout << "Yes\n" : cout << "No\n";
    }
}