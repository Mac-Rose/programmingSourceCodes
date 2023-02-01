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
int solve(vi A, int B)
{
    int N = A.size();
    sort(A.begin(), A.end());
    vector<long long> ans(N), ans1(N);
    int i = 0;
    for (int j = 0; j <= N - B; j++)
    {
        int k = j;
        while (k < N and i < N)
        {
            ans[k] = A[i++];
            k += B;
        }
    }
    reverse(A.begin(), A.end());
    i = 0;
    for (int j = 0; j <= N - B; j++)
    {
        int k = j;
        while (k < N and i < N)
        {
            ans1[k] = A[i++];
            k += B;
        }
    }
    for (auto &it : ans1)
        cout << it << ' ';
    cout << endl;

    for (auto &it : ans)
        cout << it << ' ';
    cout << endl;

    int temp = 0, temp1 = 0;
    for (int i = 0; i < N - B; i++)
    {
        temp += abs(ans[i] - ans[i + B]);
        temp1 += abs(ans1[i] - ans1[i + B]);
    }
    return min(temp, temp1);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << solve({1, 2, 4}, 2);
}