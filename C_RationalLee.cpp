#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,k;
        cin>>n>>k;
        vi integ(n);
        for(auto &it:integ) cin>>it;
        vi fr(k);
        int count=0;
        for(auto &it:fr) {cin>>it;if(it==1)count++;}
        sort(all(fr));
        sort(all(integ),greater<ll>());
        int first=k,last=0;
        int ans=0;
        for(int i=0;i<k;i++) ans+=integ[i];
        for(int i=0;i<count;i++) ans+=integ[i];
        for(int i=count;i<k;i++)
        {
            first+=fr[i]-1;
            last=first;
            ans+=integ[last-1];
        }
        cout<<ans<<endl;
    }
}