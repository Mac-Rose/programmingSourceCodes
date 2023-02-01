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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            freq[g]++;
        }
        vi ans(n + 1, 0);
        priority_queue<int> smo; //smallest multiple occurence
        ans[0] = freq[0];
        if (freq[0] > 1)
            for (int j = 0; j < freq[0] - 1; j++)
                smo.emplace(0);
        for (int i = 1; i <= n; i++)
        {
            if (ans[i - 1] == -1)
            {
                ans[i] = -1;
                continue;
            }
            ans[i] = ans[i - 1] - freq[i - 1];
            ans[i] += freq[i];
            if (freq[i - 1] == 0)
            {
                if (smo.empty())
                    ans[i] = -1;
                else
                {
                    ans[i] += i - smo.top() - 1;
                    smo.pop();
                }
            }
            if (freq[i] > 1)
                for (int j = 0; j < freq[i] - 1; j++)
                    smo.emplace(i);
        }
        for (int &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}