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
        while(n>10*b and a>0)
        {
            n/=2;
            n+=10;
            a--;
        }
        n-=10*b;
        if(n<=0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}