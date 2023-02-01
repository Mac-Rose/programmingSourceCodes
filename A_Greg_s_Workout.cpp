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
    int n;
    cin >> n;
    int c = 0, bi = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        if (i % 3 == 1)
            bi += g;
        else if (i % 3 == 2)
            b += g;
        else
            c += g;
    }
    if (b > c and b > bi)
        cout << "back";
    else if (c > b and c > bi)
        cout << "chest";
    else
        cout << "biceps";
}