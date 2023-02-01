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
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        c1-=a1;
        c2-=a2;
        c3-=a3;
        if(min({c1,c2,c3})<0) 
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            if(c1+c3>=a4)
            {
                a4-=c1;
                if(a4>0) c3-=a4;
            }
            else 
            {
            cout<<"NO\n";
            continue;
            }
            if(c2+c3>=a5)
            {
                a5-=c2;
                if(a5>0) c3-=a5;
            }
            else 
            {
            cout<<"NO\n";
            continue;
            }
        }
        cout<<"YES\n";
    }
}