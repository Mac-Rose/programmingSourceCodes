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
#define N 100005
vector<int> prime(N, -1);
void precomputation()
{
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == -1)
        {
            for (int j = i; j < N; j += i)
            {
                prime[j] = i;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precomputation();
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    vi freq(N + 5);
    for (int i = 0; i < n; i++)
    {
        while (v[i] > 1)
        {
            int x = prime[v[i]];
            freq[x]++;
            while (v[i] % x == 0)
                v[i] /= x;
        }
    }
    cout << max(1ll, *max_element(all(freq)));
}