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

string a;
int n;
inline bool lex_compare(int &i)
{
    for (int j = 0; j < max(i, n - i); j++)
    {
        if (a[j % i] < a[i + (j % (n - i))])
            return true;
        else if (a[j % i] > a[i + (j % (n - i))])
            return false;
    }
    return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> n >> k;
    cin >> a;
    int l = a.size();
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a.front())
        {
            l = i;
            break;
        }
        else if (a[i] == a.front() and lex_compare(i))
        {
            l = i;
            break;
        }
    }
    for (int i = 0; i < k; i++)
        cout << a[i % l];
}