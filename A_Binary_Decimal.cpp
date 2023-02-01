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
#define all(c) (c).begin(),(c).end()

void check(int i,string a, int &ans)
{
    for(;i<a.size();i++)
    {
        if(a[i]-48>ans) ans=a[i]-48;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        string a;
        cin>>a;
        int ans=1;
        check(0,a,ans);
        cout<<ans<<endl;
    }
}