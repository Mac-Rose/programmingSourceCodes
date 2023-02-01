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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vi help(n);
        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
                help[i]++;
            if (v[i] != n - i)
                help[i] += 2;
        }
        int first = 0, second = 0, both = 0;
        for (int i = 0; i < n; i++)
        {
            if (help[i] == 1)
                first++;
            else if (help[i] == 2)
                second++;
            else if (help[i] == 3)
                both++;
        }
        if (first < second)
        {
            int left = second - first;
            if (left >= both)
                cout << "First";
            else
                cout << "Tie";
        }
        else if (first > second)
        {
            int left = first - second;
            if (left > both)
                cout << "Second";
            else
                cout << "Tie";
        }
        else
        {
            if (both == 0)
                cout << "First";
            else
                cout << "Tie";
        }
        cout << endl;
    }
}