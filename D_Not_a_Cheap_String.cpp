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

string Split_the_String(string S, int K)
{
    int one_count = count(S.begin(), S.end(), '1');

    if (one_count < K)
        return "NO";
    if (one_count % K == 0)
    {
        int l = one_count / K;
        vector<pair<int, int>> ans;
        vector<int> v;
        int temp = 0, start, last, ideal_distance;

        int zero = 0;

        bool isFirst1 = true;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '1')
            {
                temp++;
            }

            if (temp == 0)
            {
                zero++;
            }
            if (temp == 1)
            {
                start = i;
                v.push_back(zero);
                zero = 0;
            }
            if (temp == l)
            {
                temp = 0;
                last = i;
                if (isFirst1 == true)
                {
                    isFirst1 = false;
                    ideal_distance = last - start + 1;
                }
                else if (last - start + 1 != ideal_distance)
                    return "NO";
                ans.push_back({start, last});
            }
        }
        v.push_back(zero);
        string ideal = S.substr(ans.front().first, ans.front().second - ans.front().first + 1);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = ans[i].first, k = 0; j <= ans[i].second; j++, k++)
            {
                if (S[j] != ideal[k])
                    return "NO";
            }
        }

        int must = v.front() + v.back();
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] < must)
            {
                return "NO";
            }
        }
        return "YES";
    }
    else
        return "NO";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    int k;
    cin >> a >> k;
    cout << Split_the_String(a, k);
}