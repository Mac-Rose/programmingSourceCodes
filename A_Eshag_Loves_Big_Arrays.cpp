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
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        sort(v.begin(),v.end());
        cout<<v.size()-count(v.begin(),v.end(),v[0]);
        cout<<endl;
    }
}