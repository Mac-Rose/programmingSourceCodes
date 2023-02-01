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
        int n,l,r;
        cin>>n>>l>>r;
        vi v(n,0);
        for(int i=0;i<l;i++)
        {
            int g;
            cin>>g;
            v[g-1]++;
        }
        for(int i=l;i<n;i++)
        {
            int g;
            cin>>g;
            v[g-1]--;
        }
        int su=0,s=0;
        int ans=abs(l-r)/2;
        /*for(int it=0;it<n;it++)
        {
            if(v[it]%2==0) 
            {
                ans+=abs(v[it])/2;
                v[it]=0;
            }
            else 
            {
                ans+=abs(v[it])/2;
                if(v[it]>0) v[it]=1;
                else v[it]=-1; 
            }
        }*/
        for(int it=0;it<n;it++)
        {
            //su+=v[it];
            s+=abs(v[it]);
        }
        //ans+=abs(su)/2;
        ans+=s/2;
        cout<<ans<<endl;
    }
}