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

//sabke no of set bits count karne h
//fir jinme bhi sari bits set h wo result denge 0
//baki nhi denge

//uske baad agar sari bits 'k' ka multiple h to valid k hoga
// other wise nhi hoga

//isko check karne k liye
//gcd nikalna padega
//fir gcd k sare multiple less than n will be the answer

//special case : jab sabka gcd 0 aaya iska matlab sare number
//ka koi combination uthalo sab 'k' Zero bana payenge
vector<long long> allDivisiors(long long n)
{
    vector<long long> divisors;
    ll limit = sqrt(n + 1);
    for (ll i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divisors.push_back(i);
            else
                divisors.push_back(i), divisors.push_back(n / i);
        }
    }
    sort(all(divisors));
    return divisors;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<int> set_bit_count(31, 0);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            for (int j = 0; j < 31; j++)
            {
                int u = 1ll << j;
                if (u & g)
                    set_bit_count[j]++;
            }
        }
        int gcd = set_bit_count.front();
        for (int i = 0; i < 31; i++)
            gcd = __gcd(gcd, set_bit_count[i]);
        if (gcd == 0)
        {
            for (int i = 0; i < n; i++)
                cout << i + 1 << ' ';
        }
        else
        {
            vi v = allDivisiors(gcd);
            for (auto &it : v)
                if (it <= n)
                    cout << it << ' ';
                else
                    break;
        }
        cout << endl;
    }
}