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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        vi v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        sort(v.begin(),v.end());
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            if(ans==0) break;
            if(v[i+1]-v[i]<ans) 
            {
                ans=v[i+1]-v[i];
            }
        }
        cout<<ans<<"\n";
    }

}