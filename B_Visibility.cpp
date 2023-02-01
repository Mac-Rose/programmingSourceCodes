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
    int x,y,n,m;
    cin>>x>>y>>n>>m;
    char a[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans;
    if(a[n-1][m-1]=='.') ans=1;
    else ans=0;
    for(int i=m;i<y;i++)
    {
        if(a[n-1][i]=='#') break;
        else ans++;
    }
    for(int i=m-2;i>-1;i--)
    {
        if(a[n-1][i]=='#') break;
        else ans++;
    }
    for(int i=n;i<x;i++)
    {
        if(a[i][m-1]=='#') break;
        else ans++;
    }
    for(int i=n-2;i>-1;i--)
    {
        if(a[i][m-1]=='#') break;
        else ans++;
    }
    cout<<ans;
}