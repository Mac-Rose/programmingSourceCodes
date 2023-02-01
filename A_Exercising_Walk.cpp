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
        int a,b,c,d;
        int x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        
        if((a-b)>abs(x-x1) and ((x1-x2)!=0))
        {
            cout<<"No\n";
            continue;
        }
        else if((b-a)>abs(x-x2) and ((x1-x2)!=0))
        {
            cout<<"No\n";
            continue;
        }
        else if((c-d)>abs(y-y1) and ((y1-y2)!=0))
        {
            cout<<"No\n";
            continue;
        }
        else if((d-c)>abs(y-y2) and ((y1-y2)!=0))
        {
            cout<<"No\n";
            continue;
        }
        else cout<<"Yes\n";
    }
}