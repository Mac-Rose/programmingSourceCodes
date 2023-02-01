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
    int tst;
    cin>>tst;
    while(tst--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c==1) 
        {
            for(int i=0;i<a;i++)
            {
                if(i==0) cout<<1;
                else cout<<0;
            }
            cout<<endl;
        }
    }
}