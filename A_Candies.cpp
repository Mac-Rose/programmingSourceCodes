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
    map <int, int> dp;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        if(dp.find(n)!=dp.end())
        {
            cout<<dp[n]<<endl;
            continue;
        }
        int j=1;
        double m=(log2(((n*1.0)/j)+1));
        if(m==(int)m) 
        {
            cout<<1<<endl;
            continue;
        }
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                m=(log2(((n*1.0)/j)+1));
                if(m==(int)m)
                {
                    cout<<j<<endl;
                    dp[n]=j;
                    break;
                }
                m=(log2(((n*1.0)/(n/j))+1));
                if(m==(int)m)
                {
                    int ans=(n/j);
                    cout<<ans<<endl;
                    dp[n]=ans;
                    break;
                }
            }
        }
    }
}