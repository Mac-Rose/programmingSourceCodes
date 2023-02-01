#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

void prin(vector<ll>v)
{
    auto it=v.begin();
    for(;it!=v.end()-2;it++)
    {
        cout<<*it<<" ";
    }
}

void pri(vector<ll>v)
{
    auto it=v.begin();
    for(;it!=v.end()-1;it++)
    {
        if(*it==0);
        else cout<<*it<<" ";
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        int flag=1;
        cin>>n;
        vector<long long> v;
        unsigned long long s=0;
        for(int i=0;i<n+2;i++)
        {
            ll g;
            cin>>g;
            s+=g;
            v.pb(g);
        }
        sort(v.begin(),v.end());
        s-=v[n+1];
        if(s==2*v[n]) //If last value is the extra value
        {
            flag=0;
            prin(v);
            cout<<endl;
        }
        if(flag==1)
        {
            for(int i=0;i<=n;i++)
            {
                if(s-v[i]==v[n+1])
                {
                    v[i]=0;
                    pri(v);
                    cout<<endl;
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1) cout<<-1<<endl;
    }
}