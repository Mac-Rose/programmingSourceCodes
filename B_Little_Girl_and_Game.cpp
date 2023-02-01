#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    vi freq(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i] - 97]++;
    }
    int co = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] & 1)
            co++;
    if (co & 1 or co == 0)
        cout << "First";
    else
        cout << "Second";
}