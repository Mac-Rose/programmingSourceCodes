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
#define MOD 1000000007

bool comp(pii sec, pii fir)
{
    if (sec.F > fir.F)
        return true;
    else if (sec.F == fir.F)
    {
        if (sec.S > fir.S)
            return true;
        else
            return false;
    }
    else
        return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    vector<pii> neg;
    int y = 0;
    for (int &it : v)
    {
        cin >> it;
        if (it < 0)
        {
            neg.push_back({it, &it - &v.front()});
            it = 0;
        }
        else
            y++;
    }
    sort(all(neg), comp);
    for (int i = 0; i < neg.size(); i++)
    {
        int temp = 0;
        bool ans = true;
        for (int j = 0; j < n; j++)
        {
            temp += v[j];
            if (j == neg[i].S)
                temp += neg[i].F;
            if (temp < 0)
                ans = false;
        }
        if (ans)
        {
            v[neg[i].S] = neg[i].F;
            y++;
        }
    }
    cout << y;
}