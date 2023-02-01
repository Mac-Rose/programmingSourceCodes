#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x,t,y;
    x=(l*k*1.0)/(nl*n);
    y=(c*d*1.0)/(n);
    t=(p*1.0)/(np*n);
    cout<<min(min(x,y),t);
    return 0;
}