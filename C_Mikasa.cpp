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

unsigned ho2(unsigned x)
{
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
 
    return x ^ (x >> 1);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;//if m is less than n then ans =0
        if(m<n) cout<<0;
        else
        {
            unsigned i=ho2(m);
            if(i<=n)
            {
                i=0;
            }
            vi v;
            for(unsigned j=i;j<=m;j++)
            {
                v.pb(n^j);
            }
            sort(all(v));
            
            for(int j=0,k=i;j<v.size();j++,k++)
            {
                if(v[j]!=k) {cout<<k;break;}
            }
        }
        cout<<endl;
    }
}