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
    list<int> v;
    while(tst--)
    {
        int n;
        cin>>n;
        if(n==1) 
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        else if (n==3)
        {
            cout<<v.front()<<endl;
        }
        else
        {
            v.pop_front();
        }
        
    }
}