#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int g=max(max(a,b),c);
        n-=(3*g-a-b-c);
        if(n%3==0 && n>=0) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}