#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int y=min(n,m);
    if(y & 1) cout<<"Akshat";
    else cout<<"Malvika";
    return 0;
}