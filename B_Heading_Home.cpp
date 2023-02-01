#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define int ll
#define pb push_back
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
        int a,h,k;
        cin>>a>>h>>k;
        int ans=ceil((abs(h-a)*1.0)/k);
        cout<<ans<<"\n";

    }
}