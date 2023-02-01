#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    if(k>n*n) 
    {
        cout<<0;
        exit(0);
    }
    ll ans;
    if(sqrt(k)-int(sqrt(k))) ans=0;
    else ans=-1;
    int temp;
    if(n>sqrt(k)) temp=sqrt(k);
    else temp=n;
    for(int i=1;i<=temp;i++)
    {
        if(k%i==0 and k/i<=n) ans+=2;
    }
    cout<<ans;
}