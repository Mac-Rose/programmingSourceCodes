#include<bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long n,l;
    cin>>n>>l;
    set<int> s;
    long long h;
    for (int i = 0; i < n; ++i)
    {
        cin>>h;
        s.insert(h);
    }
    auto g=s.end();
    g--;
    long long g1=*g;
    long long x=*s.begin();
    long double ma=max(x,(l-g1));
    s.insert(l);
    auto a=s.end();
    a--;
    auto y=s.begin();
    
    
    y++;
    for (auto it = s.begin(); it != a; it++,y++)
    {
        long long t=(*y-*it);
        if((t*1.0)/2>ma) ma=(t*1.0)/2 ;

    }
    cout<<fixed<<setprecision(10)<<ma;
}   
