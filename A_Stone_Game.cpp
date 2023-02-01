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
        vi v;
        int ans=0;
        int flag=1;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
            if((g==1 or g==n) and flag==1)
            {
                ans+=i+1;
                flag=0;
            }
        }
        for(int i=ans;i<n;i++)
        {
            if(v[i]==1 or v[i]==n)
            {
                ans+=min(i-ans+1,n-i);
                break;
            }
        }
        int ans1=0;
        int flag1=1;
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            int g;
            g=v[i];
            if((g==1 or g==n) and flag1==1)
            {
                ans1+=i+1;
                flag1=0;
            }
        }
        for(int i=ans1;i<n;i++)
        {
            if(v[i]==1 or v[i]==n)
            {
                ans1+=min(i-ans1+1,n-i);
                break;
            }
        }
        cout<<min(ans,ans1)<<endl;
    }
}