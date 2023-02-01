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
        vi v;
        for(int i=0;i<2*n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        sort(v.begin(),v.end());
        vi b(2*n,0);
        for(int i=0,j=0;j<2*n;i++,j+=2)
        {
            b[j]=v[i];
        }
        for(int j=1,i=2*n-1;j<2*n;j+=2,i--)
        b[j]=v[i];
        for(auto it:b)
        cout<<it<<" ";
        cout<<endl;
    }
}