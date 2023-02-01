#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    long long s = x*y*z;
    int a,b,c;
    a=s/(x*x);
    b=s/(y*y);
    c=s/(z*z);
    cout<<4*(a+b+c);
    return 0;
}