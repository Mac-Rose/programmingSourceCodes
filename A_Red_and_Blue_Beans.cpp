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
        ll a,b,n;
        cin>>a>>b>>n;
        if((min(a,b)*(n+1)) >= max(a,b)) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}