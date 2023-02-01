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
        map<int , int> v;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v[g-i]++;
        }
        for(auto it:v)
        {
            ll re=it.S;
            ans+=(re*re-re)/2;
        }
        cout<<ans<<endl;
    }
}