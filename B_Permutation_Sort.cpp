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
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        vi b(n);
        iota(b.begin(),b.end(),1);
        if(b==v)
        {
            cout<<0<<endl;
            continue;
        }
        else if(v[0]==1 or v.back()==n)
        {
            cout<<1<<endl;
            continue;
        }
        else if(v[0]==n and v.back()==1) cout<<3<<endl;
        else cout<<2<<endl;
    }
}