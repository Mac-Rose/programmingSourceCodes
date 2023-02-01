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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        if (g & 1)
        {
            if (k & 1)
                g++;
            else
                g--;
            k++;
        }
        cout << g / 2 << endl;
    }
}