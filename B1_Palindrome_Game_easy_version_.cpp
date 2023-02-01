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
        int na;
        cin>>na;
        string c;
        cin>>c;
        int n=count(c.begin(),c.end(),'0');
        if(n==1) cout<<"BOB\n";
        else if(n&1) cout<<"ALICE\n";
        else cout<<"BOB\n";
    }
}