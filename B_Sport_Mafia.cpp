#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll x1,x2;
    long double temp = -0.5 * (-3 + sqrt(9 + 8*(n+k)));
    x1 = temp ;
    temp = -0.5 * (-3 - sqrt(9 + 8*(n+k)));
    x2 =  temp;
    cout<<n+    min(x1,x2);
}