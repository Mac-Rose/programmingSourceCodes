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
    int n;
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        s+=g;
    }
    int ans=0;
    for(int i=1;i<6;i++)
    {
        if((s+i)%(n+1)!=1) ans++;
    }
    cout<<ans;
}