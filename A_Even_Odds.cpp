#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k,g;
    cin>>n>>k;
    if(k>ceil((n*1.0)/2)) 
    {
        g=(k-ceil((n*1.0)/2))*2;
        cout<<g;}
    else 
    {
        g=1+(k-1)*2;
        cout<<g;}
    return 0;
}