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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        unsigned long long ans=0;
        vector<vector<int>> v( 100 , vi);
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v[g].pb(i+1);
        }
        for(int i=1;i<=10e9;i++)
        {
            auto m=v[i].end();
            m--;
            for(auto it=v[i].begin();it!=m;it++)
            {
                for(auto t=v[i].begin()+1;t!=v[i].end();t++)
                {
                    ans+=(*it)*(n-(*t)+1);
                }
            }
        }
        cout<<ans<<endl;
    }
}