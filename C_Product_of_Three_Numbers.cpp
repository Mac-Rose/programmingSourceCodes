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
        int flag1=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                v.pb(i);
                n/=i;
                flag1=1;
                int flag=1;
                for(int j=2;j<=sqrt(n);j++)
                {
                    if(n%j==0 and (j!=i and n/j!=j))
                    {
                        v.pb(j);
                        v.pb(n/j);
                        flag=0;
                        break;
                    }
                }
                if(flag==1) cout<<"NO\n";
                else
                {
                    cout<<"YES\n";
                    for(auto it:v)
                    {
                        cout<<it<<" ";
                    }
                    cout<<endl;
                }
                break;
            }
        }
        if(flag1==0) cout<<"NO\n";
    }
}