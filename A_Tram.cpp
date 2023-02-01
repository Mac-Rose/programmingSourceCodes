#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int ma=0,pr=0;
    while(tst--)
    {
        int a,b;
        cin>>a>>b;
        pr-=a;
        pr+=b;
        ma=max(ma,pr);
    }
    cout<<ma;
    return 0;
}