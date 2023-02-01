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
#define all(c) (c).begin(),(c).end()

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
        vi v(n);
        for(auto &it:v) cin>>it;
        sort(all(v));
        int s=0;
        string ans="YES";
        for(int i=0;i<n;i++)
        {
            if(s==v[i]) 
            {
                int j=i;
                for(;j<n;j++)
                {
                    if(v[j]>v[i]) {swap(v[j],v[i]);break;}
                }
                if(j==n)
                {
                    ans="NO\n";
                    break;
                }
            }
            else s+=v[i];
        }
        if(ans=="YES")
        {cout<<ans<<endl;for(auto it:v) cout<<it<<" ";cout<<endl;}
        else cout<<ans;
    }
}