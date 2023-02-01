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
        int x1,x2,y1,y2,z1,z2;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if(x2>=x1 and y2>=y1 and z2<=z1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}