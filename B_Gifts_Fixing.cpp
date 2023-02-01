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
        vi candy,orange;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            candy.pb(g);
        }
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            orange.pb(g);
        }
        int min_can=*min_element(candy.begin(),candy.end());
        int min_ora=*min_element(orange.begin(),orange.end());
        unsigned long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(candy[i]>min_can and orange[i]>min_ora)
            {
                ans+=min(candy[i]-min_can,orange[i]-min_ora);
                if(candy[i]-min_can>orange[i]-min_ora)
                {
                    candy[i]-=min(candy[i]-min_can,orange[i]-min_ora);
                    ans+=candy[i]-min_can;
                }
                else if(candy[i]-min_can<orange[i]-min_ora)
                {
                    orange[i]-=min(candy[i]-min_can,orange[i]-min_ora);
                    ans+=orange[i]-min_ora;
                }
            }
            else if(candy[i]==min_can and orange[i]==min_ora) continue;
            else 
            {
                if(orange[i]==min_ora)
                {
                    ans+=candy[i]-min_can;
                }
                else
                {
                    ans+=orange[i]-min_ora;
                }
            }
        }
        cout<<ans<<endl;
    }
}