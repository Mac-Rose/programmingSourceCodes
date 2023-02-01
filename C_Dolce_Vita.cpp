#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
bool isItPossible(string word1, string word2)
{
    int ans1 = 0, ans2 = 0;
    map<char, int> a, b;
    for (char &it : word1)
        a[it]++;

    for (char &it : word2)
    {
        b[it]++;
    }

    ans1 = a.size();
    ans2 = b.size();
    bool ans = false;

    if (ans1 == ans2)
    {
        for (auto &[c, d] : a)
        {
            if (b.find(c) != b.end())
            {
                ans = true;
                break;
            }
            else if (d == 1)
            {
                for (auto &[e, f] : b)
                {
                    if (f == 1 and a.find(e) == a.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (d > 1)
            {
                for (auto &[e, f] : b)
                {
                    if (f > 1 and a.find(e) == a.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
        }
    }

    else if (ans1 + 1 == ans2)
    {
        for (auto &[c, d] : b)
            if (d > 1 and a.find(c) == a.end())
            {
                for (auto &[e, f] : a)
                {
                    if (f > 1 and b.find(e) != b.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (d == 1 and a.find(c) != a.end())
            {
                for (auto &[e, f] : a)
                {
                    if (e != c and f > 1 and b.find(e) != b.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (d == 1 and a.find(c) == a.end())
            {
                for (auto &[e, f] : a)
                {
                    if (f > 1 and b.find(e) == b.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
    }
    else if (ans2 + 1 == ans1)
        for (auto &[c, d] : a)
            if (d > 1 and b.find(c) == b.end())
            {
                for (auto &[e, f] : b)
                {
                    if (f > 1 and a.find(e) != a.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (d == 1 and b.find(c) != b.end())
            {
                for (auto &[e, f] : b)
                {
                    if (e != c and f > 1 and a.find(e) != a.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (d == 1 and b.find(c) == b.end())
            {
                for (auto &[e, f] : b)
                {
                    if (f > 1 and a.find(e) == a.end())
                    {
                        ans = true;
                        break;
                    }
                }
            }

    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << isItPossible("az", "a");
}