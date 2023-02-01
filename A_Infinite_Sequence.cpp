#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    //k^2+k>=2*n;
    for(ll k=1;k<10e7;k++)
    {
        if(k*(k+1)/2==n)
        {
            cout<<k;
            break;
        }
        else if(k*(k+1)/2>=n)
        {
            cout<<n-((k-1)*(k)/2);
            break;
        }
    }
}