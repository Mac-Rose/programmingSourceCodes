#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int a[tst],b[tst],c[tst];
    int i=0,sa=0,sb=0,sc=0;
    while(tst--)
    {
        cin>>a[i];sa+=a[i];
        cin>>b[i];sb+=b[i];
        cin>>c[i];sc+=c[i];
        i++;
    }
    if(sa==0 and sb==0)
    {
        if(sc==0) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
    return 0;
}