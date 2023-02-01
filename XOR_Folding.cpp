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
        int n,m;
        cin>>n>>m;
        int ans;
        for(int i=0;i<n*m;i++)
        {
            char g;
            cin>>g;
            g-=48;
            if(i!=0) ans^=g;
            else ans=g;
        }
        if(ans==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}