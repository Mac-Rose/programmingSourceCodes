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

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    srand(time(NULL)); //for stress-testing
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    for (int I = 0; I < tst; I++)
    {
        int aw, bw;
        cin >> aw >> bw;
        set<int> ans;
        //abababa
        int ma = 0, mi = 0, a1 = aw, b1 = bw;
        for (int i = 0; i < a1 + b1; i++)
        {
            if (i % 2 == 0)
            {
                if (bw > 0)
                {
                    bw--;
                    ma++;
                }
                else
                    aw--;
            }
            else
            {
                if (aw > 0)
                {
                    aw--;
                    ma++;
                }
                else
                    bw--;
            }
        }
        aw = a1, bw = b1;
        for (int i = 0; i < a1 + b1; i++)
        {
            if (i % 2 == 0)
            {
                if (aw > 0)
                    aw--;
                else
                {
                    bw--;
                    mi++;
                }
            }
            else
            {
                if (bw > 0)
                    bw--;
                else
                {
                    aw--;
                    mi++;
                }
            }
        }
        for (int i = mi; i <= ma; i += 2)
        {
            ans.emplace(i);
        }

        //bababababab
        aw = a1, bw = b1, ma = 0, mi = 0;
        for (int i = 0; i < a1 + b1; i++)
        {
            if (i % 2 == 0)
            {
                if (aw > 0)
                {
                    aw--;
                    ma++;
                }
                else
                    bw--;
            }
            else
            {
                if (bw > 0)
                {
                    bw--;
                    ma++;
                }
                else
                    aw--;
            }
        }

        aw = a1, bw = b1;

        for (int i = 0; i < a1 + b1; i++)
        {
            if (i % 2 == 0)
            {
                if (bw > 0)

                    bw--;

                else
                {
                    bw--;
                    mi++;
                }
            }
            else
            {
                if (aw > 0)
                    aw--;
                else
                {
                    bw--;
                    mi++;
                }
            }
        }

        for (int i = mi; i <= ma; i += 2)
        {
            ans.emplace(i);
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}