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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int  r1=0,r2=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int it;
            cin>>it;
            if(it%3==0) ans++;
            else if(it%3==1) r1++;
            else r2++;
        }
        ans+=min(r1,r2);
        ans+=abs(r1-r2)/3;
        cout<<ans<<endl;
    }
}