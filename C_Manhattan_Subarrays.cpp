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
        vi v(n),g;
        for(auto &it:v) cin>>it;
        int ans=n-1+n;
        int ma=0;
        int first=0,last=0,mid=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=ma)
            {
                count++;
                if(count==3)
                {
                    first=mid;
                }
                if(count==2)
                {
                    mid=last;
                }
                last=i;
                ma=v[i];
            }
        }
        cout<<ans<<endl;
    }
}