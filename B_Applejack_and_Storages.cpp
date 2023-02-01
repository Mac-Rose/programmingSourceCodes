#include <bits/stdc++.h>

using namespace std;

#define pb emplace_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define ll long long
#define pii pair<int, int>

signed main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    map<int, int> count;
    int cnt2 = 0, cnt4 = 0, cnt6 = 0, cnt8 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
        if (count[x] == 2)
            cnt2++;
        if (count[x] == 4)
            cnt4++;
        if (count[x] == 6)
            cnt6++;
        if (count[x] == 8)
            cnt8++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        if (c == '-')
        {
            int x;
            cin >> x;
            count[x]--;
            if (count[x] == 1)
                cnt2--;
            if (count[x] == 3)
                cnt4--;
            if (count[x] == 5)
                cnt6--;
            if (count[x] == 7)
                cnt8--;
        }
        else
        {
            int x;
            cin >> x;
            count[x]++;
            if (count[x] == 2)
                cnt2++;
            if (count[x] == 4)
                cnt4++;
            if (count[x] == 6)
                cnt6++;
            if (count[x] == 8)
                cnt8++;
        }
        if (cnt4 >= 2 or cnt8 >= 1)
        {
            cout << "YES\n";
        }
        else if (cnt4 == 0)
        {
            cout << "NO\n";
        }
        else if ((cnt6 >= 1 and cnt2 >= 2) or (cnt2 >= 3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}