#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int r=n%x;
        int r1=n-r;
        if(r1+y>n) cout<<r1-x+y<<endl;
        else cout<<r1+y<<endl;
    }
    return 0;
}