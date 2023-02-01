#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

int count(int a)
{
    return 10 - abs(9 - a);
}
int check(string a, vi a1, int k)
{
    if (k < 2 and a1[k] > 0)
        return 0;
    else if (k == 1 and a1[2] == a[0] - 48)
        return 1;
    vi b1, b2;
    b1 = a1, b2 = a1;
    int temp1, temp2;
    if (k > 3)
    {
        temp1 = count(a[k - 2] - 38 - b1[k]);
        temp2 = count(a[k - 2] - 48 - b2[k]);
    }
    else
        temp1 = 0, temp2 = count(a[k - 2] - 48 - b2[k]);
    if (k > 3)
        b1[k - 2]++;
    b1[k] = a[k - 2] - 48;
    b2[k] = a[k - 2] - 48;
    k--;
    if (temp1 < 1 and temp2 < 1)
        return 0;
    else if (temp2 < 1)
        return temp1 * check(a, b1, k);
    else if (temp1 < 1)
        return temp2 * check(a, b2, k);
    else
        return temp1 * check(a, b1, k) + temp2 * check(a, b2, k);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a1;
        cin >> a1;
        vi a(a1.size() + 2, 0);
        cout << check(a1, a, a.size() - 1) - 2;
        cout << endl;
    }
}