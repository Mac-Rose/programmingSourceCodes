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

bool check(string a)
{
    vi freq(26, 0);
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == '?')
            continue;
        if (freq[a[i] - 65] == 1)
            return false;
        freq[a[i] - 65]++;
    }
    return true;
}

void change(string &a, int i)
{
    vi freq(26, 0);
    for (int j = i; j < i + 26; j++)
    {
        if (a[j] != '?')
            freq[a[j] - 65]++;
    }

    vector<char> b;
    for (int j = 0; j < 26; j++)
    {
        if (freq[j] == 0)
            b.pb(65 + j);
    }
    for (int k = 0, o = 0; k < a.size(); k++)
    {
        if ((k < i or k > i + 25) and a[k] == '?')
            a[k] = 'A';
        else if (a[k] == '?')
        {
            a[k] = b[o];
            o++;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    if (a.size() < 26)
    {
        cout << -1;
        exit(0);
    }
    else
    {
        int flag = 0;
        for (int i = 0; i < a.size() - 25; i++)
        {
            if (check(a.substr(i, 26)))
            {
                change(a, i);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1;
            exit(0);
        }
    }
    cout << a;
}