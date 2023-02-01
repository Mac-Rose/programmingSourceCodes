#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

int co2(int n, int r)
{
    return max(0,min(n/2,r-n/2)+(n+1)%2);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    vector<long long> v;
    cin>>n;
    ll max_val=2*n-1;
    string a=to_string(max_val);
    int len=a.size();
    if(n<5)
    {
        cout<<n*(n-1)/2;
        exit(0);
    }
    if(max_val==pow(10,len)-1) 
    {
        cout<<1;
        exit(0);
    }
    else 
    {
        int y=a[0]-'0';//399 400
        int ans=0;
        if(max_val==(y)*pow(10,len-1)+pow(10,len-1)-1) v.pb(max_val);
        for(y-=1;y>-1;y--)
        {
            ans=(y*pow(10,len-1)+pow(10,len-1)-1);
            v.pb(ans);
        }
    }
    int ans=0;
    for(auto it=v.begin();it!=v.end();it++)
    {
        ans+=co2(*it,n);
    }
    cout<<ans;
}