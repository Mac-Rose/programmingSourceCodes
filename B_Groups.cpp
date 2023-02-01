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

int n;
int sym_dif(vi a, vi b)
{
    set<int> s;
    for (auto &it : a)
        s.emplace(it);
    for (auto &it : b)
        s.emplace(it);
    return s.size();
}
bool check(vector<vi> ans)
{
    for (int i = 0; i < ans.size(); i++)
        for (int j = i + 1; j < ans.size(); j++)
            if (sym_dif(ans[i], ans[j]) == n)
                return true;
    return false;
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
        cin >> n;
        vector<vi> matrix(n, vi(5));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> matrix[i][j];
            }
        }
        vector<vi> ans;
        int flag = 0;
        for (int i = 0; i < 5; i++)
        {
            int temp = 0;
            vi temp1;
            for (int j = 0; j < n; j++)
            {
                if (matrix[j][i] == 1)
                {
                    temp++;
                    temp1.pb(j);
                }
            }
            if (temp >= n / 2)
            {
                ans.pb(temp1);
            }
        }
        if (check(ans))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}