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
    string a;
    cin>>a;
    if(!(a.size()&1) )
    {
        cout<<a.size()/2;
        exit(0);
    }
    int ans;
    string b=a.substr(1,a.size()-1);
    (b.find("1")==-1)? ans=0: ans=1;
    ans+=b.size()/2;
    cout<<ans;
}