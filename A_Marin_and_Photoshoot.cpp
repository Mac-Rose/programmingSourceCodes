#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define rep(i, k, n) for (i = k; i < n; i++)
#define coy cout << "YES"
#define con cout << "NO"
using namespace std;

vector<ll> ans;
const ll mad = 1e9 + 7;
//M = 100000009
const unsigned long long int M = 1001;
//ll sieve[1000000009];
vector<ll> sieve(1001, 0);
const ll mo = 998244353;

//const unsigned int n=10000005;

bool solve(pair<char, ll> a, pair<char, ll> b)
{

    if (a.second == b.second)
    {
        return a.first > b.first;
    }

    return false;
}
bool sol(vector<ll> a, vector<ll> b)
{

    return (a[0] < b[0]);
}

ll ceil_div(ll a, ll b)
{
    return (a + b - 1) / b;
}

ll mod(ll a, ll m)
{
    return (a % m + m) % m;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll dig_sum(ll n)
{
    ll x = n;
    ll cnt = 0;

    while (x > 0)
    {
        ll a = x % 10;
        cnt = cnt + a;

        x = x / 10;
    }
    return cnt;
}
ll dig_cnt(ll n)
{
    ll x = n;
    ll cnt = -1;

    while (x > 0)
    {
        ll a = x % 10;
        cnt = max(cnt, a);

        x = x / 10;
    }
    return cnt;
}
bool dig_check(ll n, ll num, ll len)
{
    ll x = n;
    ll cnt = 0;

    while (x > 0)
    {
        ll a = x % 10;
        if (a == num)
        {
            cnt++;
        }

        x = x / 10;
    }
    if (cnt == len)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void si()
{
    ll i, j;
    rep(i, 0, M)
    {
        sieve[i] = 1;
    }
    sieve[0] = sieve[1] = 0;
    for (i = 2; i < M; i++)
    {
        for (j = i * i; j < M; j = j + i)
        {
            sieve[j] = 0;
        }
    }
    //     rep(i,0,M)
    //     {
    //         if(sieve[i]==1)
    //         {
    //             ans.push_back((i));
    //         }
    //     }
    //
}

ll low(vector<ll> arr, ll l, ll r, ll num)
{
    ll m = 0;
    while (l < r)
    {
        m = l + (r - l) / 2;
        if (arr[m] < num)
        {
            l = m + 1;
        }
        else
        {
            r = m;
        }
    }
    //cout<<arr[l]<<" ";
    if (arr[l] >= num)
    {
        return l;
    }
    else
    {
        return arr.size();
    }

    //   if(arr[l]<=num)
    //   {
    //       return true;
    //   }
    //   else
    //   {
    //       return false;
    //   }
}

ll power(ll a, ll b)
{
    ll mo = 998244353;
    ll bb;
    if (b < 0)
    {
        bb = b;
    }
    else
    {
        bb = b;
    }
    ll ans = 1;
    while (bb > 0)
    {
        if (bb % 2 == 0)
        {
            bb = bb / 2;

            a = a * a;
            //            a=mod(a,mo)*mod(a,mo);
        }
        else
        {
            bb = bb - 1;
            ans = ans * a;
            //            ans=mod(ans,mo)*mod(a,mo);
        }
    }
    return ans;
}

string to_binary(ll num)
{
    string str = "";
    ll n = 0;
    while (num != 1)
    {
        n = num % 2;

        str = str + to_string(n);
        //vec.push_back(n);
        num = num / 2;
    }
    str = str + "1";
    //cout<<vec.size();
    //cout<<str;
    //    cout<<"\n";

    reverse(str.begin(), str.end());
    return (str);
}

ll show(ll a)
{
    return (log2(a));
}

ll lcm(ll a, ll b)
{
    return (a * b / gcd(a, b));
}

bool IsPalin(string str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

ll find_div(ll n)
{
    ll i, j, k, a;

    a = 0;
    //    cout<<sqrt(n)<<" ";
    ll x = sqrt(n) + 1;
    rep(i, 1, x)
    {
        if (n % i == 0)
        {
            k = n / i;
            j = i;
            //            cout<<k<<" "<<j<<"\n";
            if (k != j)
            {
                a += 2;
            }
            else
            {
                a += 1;
            }
        }
    }

    return a;
}

ll kadane(vector<ll> vec)
{
    ll i, j, x, k;
    ll max_sum = INT_MIN;
    ll curr_sum = 0;
    rep(i, 0, vec.size())
    {
        curr_sum += vec[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
ll slide(vector<ll> vec, ll k, ll x)
{
    ll i, j;
    ll max_sum = 0;
    rep(i, 0, k)
    {
        max_sum += vec[i];
    }

    ll cur = max_sum + (k * x);
    ll l = 0;
    ll r = k - 1;

    //    cout<<"max "<<k<<" "<<max_sum<<"\n";
    rep(i, k, vec.size())
    {
        ll a = vec[i] + x;
        ll b = vec[i - k] + x;
        ll ok = cur + a - b;
        cur = ok;
        //        cout<<"curr "<< cur<<"\n";
        //        max_sum=max(max_sum,ok);
        if (ok > max_sum)
        {
            max_sum = ok;
            l = i - k;
            r = i;
        }
    }
    ll n = vec.size();
    vector<ll> res(vec.size());
    rep(i, 0, n)
    {
        res[i] = vec[i];
    }
    rep(i, l, r + 1)
    {
        res[i] = res[i] + x;
    }

    ll ano = 0;
    rep(i, 0, n)
    {
        vec[i] = res[i];
        ano += res[i];
    }

    rep(i, 0, n)
    {
        cout << res[i] << " ";
    }
    cout << "\n";

    return ano;
}

bool check(ll sum, ll num, string str)
{
    if (sum == num)
    {
        return false;
    }
    int f = 0;
    ll i, j, k, x;
    x = 0;
    rep(i, 0, str.size())
    {
        ll val = str[i] - '0';
        if (val > num)
        {
            return false;
        }
        else if (x + val <= num)
        {
            x = x + val;
            if (x == num)
            {
                x = 0;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}
ll val(string str)
{
    ll n, a, b, d, x, y, i, j, l, r, m;

    n = str.size();
    ll len = 0;
    char ch;
    rep(i, 0, n)
    {
        if (len % 2 == 1)
        {
            if (str[i] == ch)
            {
                len++;
            }
        }
        else
        {
            len++;
            ch = str[i];
        }
    }

    //    cout<<len<<"\n";
    if (len % 2 == 1)
    {
        return (n - len + 1);
    }
    else
    {
        return (n - len);
    }
}

void fun()
{

    // @@@@  KEEEP AT IT... @@@@@
    //  ###  ALL YOUR HARD WORK IS NOT IN VAIN ####
    // <<  KEEP
    //     <<  GOING
    //    >>    IT WILL PAYYY
    //                     >>    OFFF
    //        <<  ONE DAY IT WILL >>

    ll mo = 998244353;
    ll n, a, b, d, x, y, i, j, l, r, m;

    cin >> n;
    string str;
    cin >> str;
    if (n == 1)
    {
        if (str[0] == '1')
        {
            cout << "0";
        }
        else
        {
            cout << "0";
        }
        return;
    }
    if (n == 2)
    {
        if (str[0] == '0' && str[1] == '0')
        {
            cout << "2";
        }
        else if (str[0] == '1' && str[1] == '1')
        {
            cout << "0";
        }
        else
        {
            cout << "0";
        }
        return;
    }
    x = 0;
    vector<ll> res;
    rep(i, 0, n)
    {
        if (str[i] == '0')
        {
            res.push_back(i);
        }
    }
    if (res.size() == 0)
    {
        cout << "0";
        return;
    }
    rep(i, 1, res.size())
    {
        if (res[i] - res[i - 1] == 1)
        {
            x += 2;
        }
        else
        {
            if (res[i] - res[i - 1] == 2)
            {
                x += 1;
            }
        }
    }
    cout << x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;

    //si();

    //int i;
    //rep(i,0,M)
    //{
    //    cout<<sieve[i]<<" ";
    //}

    t = 1;
    cin >> t;
    while (t--)
    {
        fun();
        cout << "\n";
        //     cout<<fflush();
    }
}