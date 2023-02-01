#include<iostream>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        if(n==1) cout<<0;
        else if(n==2) cout<<1;
        else if(n==3) cout<<2;
        else if(n&1) cout<<3;
        else cout<<2;
        cout<<endl;
    }
}