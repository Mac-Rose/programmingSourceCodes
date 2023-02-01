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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        int flag1=1;
        for(int i=0;i<n;i++)
        {
            int flag=0;
            for(int j=0;j<n;j++)
            {
                if(abs(v[i].F-v[j].F)+abs(v[j].S-v[i].S)>k) 
                {
                    flag=1;
                    break;
                }
            }
            if (flag==0) 
            {
                cout<<1<<endl;
                flag1=0;
                break;
            }
        }
        if(flag1==1) cout<<-1<<endl;
    }
}