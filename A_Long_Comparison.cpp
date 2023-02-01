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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a1, a2;
        int b1, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if (a1.size() + b1 > a2.size() + b2)
        {
            cout << '>';
        }
        else if (a2.size() + b2 > a1.size() + b1)
        {
            cout << '<';
        }
        else
        {
            if (a1.size() > a2.size())
            {
                int x = a1.size() - a2.size();
                for (int i = 0; i < x; i++)
                {
                    a2 += '0';
                }
                bool flag = true;
                for (int i = 0; i < a1.size(); i++)
                {
                    if (a1[i] > a2[i])
                    {
                        cout << '>';
                        flag = false;
                        break;
                    }
                    else if (a2[i] > a1[i])
                    {
                        cout << '<';
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    cout << "=";
            }
            else if (a2.size() > a1.size())
            {
                int x = a2.size() - a1.size();
                for (int i = 0; i < x; i++)
                {
                    a1 += '0';
                }
                bool flag = true;
                for (int i = 0; i < a1.size(); i++)
                {
                    if (a1[i] > a2[i])
                    {
                        cout << '>';
                        flag = false;
                        break;
                    }
                    else if (a2[i] > a1[i])
                    {
                        cout << '<';
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    cout << "=";
            }
            else
            {
                bool flag = true;
                for (int i = 0; i < a1.size(); i++)
                {
                    if (a1[i] > a2[i])
                    {
                        cout << '>';
                        flag = false;
                        break;
                    }
                    else if (a2[i] > a1[i])
                    {
                        cout << '<';
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    cout << "=";
            }
        }
        cout << endl;
    }
}