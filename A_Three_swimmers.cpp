#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        unsigned long long  p,a,b,c;
        cin>>p>>a>>b>>c;
        unsigned long long a1,b1,c1;
        a1=((p-1)/a)+1;
        b1=((p-1)/b)+1;

        c1=((p-1)/c)+1;

        unsigned long long g;
        g=min(min((a*a1)-p,(b*b1)-p),((c*c1)-p));
        cout<<fixed<<setprecision(0)<<g<<endl;
    }
    return 0;
}