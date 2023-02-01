#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<set<char>> v;
        bool f = true;
        for (int j = 0, i = 0; j < n; j++)
        {
            if (str[j] != 'W')
            {
                v[i].insert(str[j]);
            }
            else
            {
                ++i;
            }
        }
        for (auto set1 : v)
        {
            if (set1.size() == 1)
            {
                cout << "NO\n";
                f = false;
                break;
            }
        }
        if (f)
        {
            cout << "YES\n";
        }
    }
    return 0;
}