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
        int n, a, b;
        cin >> n >> a >> b;
        vi ans(n, -1);
        if (n & 1)
        {
            if ((n - 2) / 2 + 1 < max(a, b) or abs(a - b) > 1 or (a == b and a == (n - 2) / 2 + 1))
                cout << -1;
            else
            {
                if (a > b)
                {
                    for (int i = 1, k = 0; k < a; i += 2, k++)
                    {
                        ans[i] = n - k;
                    }
                    for (int i = 0, t = n - a; i < n; i++)
                    {
                        if (ans[i] == -1)
                            ans[i] = t, t--;
                    }
                }
                else if (b > a)
                {
                    for (int i = 1, k = 0; k < b; i += 2, k++)
                    {
                        ans[i] = k + 1;
                    }
                    for (int i = 0, t = b + 1; i < n; i++)
                    {
                        if (ans[i] == -1)
                            ans[i] = t, t++;
                    }
                }
                else
                {
                    int k = n;
                    int t = 0;
                    for (int i = 1; t < a; i += 2)
                    {
                        ans[i] = k;
                        k--;
                        t++;
                    }
                    k = 1;
                    t = 0;
                    for (int i = 0; t <= b; i += 2)
                    {
                        ans[i] = k;
                        k++;
                        t++;
                    }
                    k = b + 2;
                    for (int i = 0; i < n; i++)
                    {
                        if (ans[i] == -1)
                        {
                            ans[i] = k;
                            k++;
                        }
                    }
                }
                for (auto &it : ans)
                    cout << it << ' ';
            }
        }
        else
        {
            if ((n - 2) / 2 < max(a, b) or abs(a - b) > 1)
                cout << -1;
            else
            {
                if (a > b)
                {
                    for (int i = 1, k = 0; k < a; i += 2, k++)
                    {
                        ans[i] = n - k;
                    }
                    for (int i = 0, t = n - a; i < n; i++)
                    {
                        if (ans[i] == -1)
                            ans[i] = t, t--;
                    }
                }
                else if (b > a)
                {
                    for (int i = 1, k = 0; k < b; i += 2, k++)
                    {
                        ans[i] = k + 1;
                    }
                    for (int i = 0, t = b + 1; i < n; i++)
                    {
                        if (ans[i] == -1)
                            ans[i] = t, t++;
                    }
                }
                else
                {
                    int k = n;
                    int t = 0;
                    for (int i = 1; t < a; i += 2)
                    {
                        ans[i] = k;
                       k--;
                        t++;
                    }
                    k = 1;
                    t = 0;
                    for (int i = 0; t <= b; i += 2)
                    {
                        ans[i] = k;
                        k++;
                        t++;
                    }
                    k = b + 2;
                    for (int i = 0; i < n; i++)
                    {
                        if (ans[i] == -1)
                        {
                            ans[i] = k;
                            k++;
                        }
                    }
                }
                for (auto &it : ans)
                    cout << it << ' ';
            }
        }
        cout << endl;
    }
}