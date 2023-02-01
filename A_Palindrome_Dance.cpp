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
    
        int n,a,b;
        cin>>n>>a>>b;
        vi v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        int cost=min(a,b);
        int ans=0;
        if(n&1 and v[n/2]==2)
        ans=cost;
        else ans=0;
        for(int i=0;i<n/2;i++)
        {
            if(v[i]!=2 and v[n-i-1]!=2)
            {
                if(v[i]!=v[n-1-i]) 
                {
                    cout<<-1;
                    exit(0);
                }
            }
            else
            {
                if(v[i]==2 and v[n-i-1]==2) ans+=2*cost;
                else
                {
                    if(v[i]==2) 
                    {
                        if(v[n-i-1]==0)
                        ans+=a;
                        else ans+=b;
                    }
                    else
                    {
                        if(v[i]==0)
                        ans+=a;
                        else ans+=b;
                    }
                    
                }
                
            }
            
        }
        cout<<ans;
}