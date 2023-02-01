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
        int n,w;
        cin>>n>>w;

        multiset<int> v;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            v.emplace(b);
        }
        int ans=1;
        int val=w;
        while(v.size()!=0)
        {
            auto it=v.upper_bound(val);
            if(it==v.begin()) 
            {
                ans++;
                val=w;
            }
            else 
            {
                it--;
                val-=*it;
                v.erase(it);
            }
        }
        cout<<ans<<endl;
    }
}