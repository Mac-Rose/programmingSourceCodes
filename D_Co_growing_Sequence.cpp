#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define Endl endl
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

int check(int n,int h,vi &g)
{
    int ans=0;
    for(int i=0;i<30;i++)
    {
        if((g.back()>>i)%2 ==1 and (h>>i)%2==0)
        {
            ans+=pow(2,i);
        }
    }
    g.pb((h)^(ans));
    return ans;
}
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
        vi v(n),g;
        for(auto &it:v) cin>>it;
        int h=0;
        for(int i=0;i<n;i++)
        {
            if(i==0) 
            {
                cout<<0;
                g.pb(v[i]);
            }
            else cout<<check(g.back(),v[i],g);
            cout<<" ";
        }
        cout<<endl;
    }
}