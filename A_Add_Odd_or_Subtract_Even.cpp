#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
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
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0;
        else if(a>b)
        {
            if(a%2 == b%2) cout<<1;
            else cout<<2;
        }
        else 
        {
            if(a%2 == b%2) cout<<2;
            else cout<<1;
        }
        cout<<endl;
    }
}