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
    string a;
    cin >> a;
    vector<string> v{"RGB", "RBG", "BGR", "BRG", "GRB", "GBR"};
    string ans;
    int ans1 = INT64_MAX;
    for (int i = 0; i < 6; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != v[i][j % 3])
                temp++;
        }
        if (temp < ans1)
        {
            ans1 = temp;
            ans = v[i];
        }
    }
    cout << ans1 << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i % 3];
}