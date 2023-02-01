#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<unsigned long long> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    vi v;
    v.pb(0);
    for(int i=1;i<=31;i++)
    {
        unsigned long long k=pow(2,i)-1;
        v.pb(v.back()+((k*k)+k)/2);
    }
    while(tst--)
    {
        unsigned long long int g;
        cin>>g;
        if(*lower_bound(v.begin(),v.end(),g)==g) 
        {
            cout<<lower_bound(v.begin(),v.end(),g)-v.begin();
        }
        else
        {
            cout<<lower_bound(v.begin(),v.end(),g)-v.begin()-1;
        }
        cout<<endl;
    }
}