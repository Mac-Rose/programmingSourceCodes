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
#define N 10000000
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
    int tst;
    cin >> tst;
    precomputation();
    while (tst--)
    {
        int a, b;
        cin >> a >> b;
        if (b < a)
            swap(a, b);
        if (b - a <= 1)
        {
            cout << -1 << endl;
            continue;
        }
        int n = b - a;
        vi ans;
        while (n > 1)
        {
            int largest = prime[n];
            while (n % largest == 0)
            {
                n /= largest;
            }
            ans.pb(largest);
        }
        vi closest;
        for (int &it : ans)
        {
            int x = (it - a % it);
            if (x == it)
                x = 0;
            int temp = a + x;
            closest.pb(temp);
        }
        cout << *min_element(all(closest)) - a << endl;
    }
}