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
#define all(c) (c).begin(),(c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin>>m;
    int ma=INT32_MAX;
    for(int i=0;i<m;i++) 
    {
        int it;
        cin>>it;
        if(it<ma) ma=it;
    }
    int n;
    cin>>n;
    vi price(n);
    for(auto &it:price) cin>>it;
    sort(all(price));
    int ans=0;
    int i=n-1;
    while(i>-1)
    {
        if(i+1-ma>-1)
        ans+=accumulate(price.begin()+i-ma+1,price.begin()+i+1,0);
        else
        {
            ans+=accumulate(price.begin(),price.begin()+i+1,0);
        }
        
        i-=ma;
        if(i>=2) i-=2;
        else i=-1;
    }
    cout<<ans;
}