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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b<0)
        {
            int ans=0,ans1=0;
            vi v(all(s));
            v.erase(unique(all(v)),v.end());
            ans=accumulate(all(v),0)-48*v.size();
            ans1=v.size()-ans;
            cout<<a*n+(min(ans,ans1)+1)*b;
        }
        else
        {
            cout<<a*n+n*b;
        }
        cout<<endl;
    }
}