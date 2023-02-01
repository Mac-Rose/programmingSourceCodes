#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int g;
    if(a<c)
    {(a==1 or b==1) ? g=a+b : g=a*b;
    (g==1 or c==1) ? g+=c : g*=c;}
    else
    {
        (c==1 or b==1) ? g=c+b : g=c*b;
        (g==1 or a==1) ? g+=a : g*=a;
    }
    cout<<g;
    return 0;
}