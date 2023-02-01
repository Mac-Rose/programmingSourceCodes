#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int y=tst;
    int su=0;
    while(tst--)
    {
        int n;
        cin>>n;
        su+=n;
    }
    double ans;
    ans=(su*1.0)/y;
    cout<<setprecision(8)<<ans;
    return 0;
}   