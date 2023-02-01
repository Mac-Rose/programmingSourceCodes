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
        int n;
        cin>>n;
        int co=0,ce=0;
        for(int i=0;i<2*n;i++)
        {
            int g;
            cin>>g;
            if(g&1) co++;
            else ce++;
        }
        if(ce>co) cout<<"NO";
        else if(co==ce) cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
}