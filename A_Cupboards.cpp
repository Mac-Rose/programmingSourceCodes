#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

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
    int y=tst;
    int ans=0;
    long long l=0,r=0;
    while(tst--)
    {
        int n;
        cin>>n;
        if(n==1) l++;
        cin>>n;
        if(n==0) r++;
    }
    ans+=min(l,y-l);
    ans+=min(r,y-r);
    cout<<ans;
}