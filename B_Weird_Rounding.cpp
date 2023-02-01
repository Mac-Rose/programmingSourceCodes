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
    int n,m;
    cin>>n>>m;
    if(n==0) 
    {cout<<0;exit(0);}
    string a=to_string(n);
    int len=floor(log10(n))+1;
    if(m>=len) cout<<len-1;
    else
    {
        int ans=0;
        int z=0;
        for(int i=len-1;z!=m and i>=0;i--)
        {
            if(a[i]!='0') ans++;
            else z++;
        }
        if(z!=m) cout<<len-1;
        else
        cout<<ans;
    }
}