//Radhey Radhey.
#include <bits/stdc++.h>
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define all(v) v.begin(), v.end()
#define pb push_back
#define M 1e9 + 7
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif //ONLINE_JUDGE
    fast
}
bool isPrime(int p)
{
    if (p <= 1)
        return false;
    for (int i = 2; i <= sqrt(p); i++)
        if (p % i == 0)
            return false;
    return true;
}
int main()
{
    //init_code();
    ll n, m, x, y, i, t, k, j, ans = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll arr[n], temp[n], tmp = n;
        for (i = 0; i < n; i++)
        {
            arr[i] = i + 1;
            temp[i] = arr[i];
        }
        sort(temp, temp + n, greater<ll>());
        j = 0;
        while (tmp--)
        {
            for (i = 0; i < n; i++)
            {
                cout << temp[i] << " ";
            }
            for (i = 0; i < n; i++)
            {
                temp[i] = arr[i];
            }
            sort(temp, temp + n, greater<ll>());
            swap(temp[j], temp[j + 1]);
            ;
            cout << endl;
            j++;
        }
    }

    return 0;
}
