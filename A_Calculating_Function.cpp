#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long tst;
    cin>>tst;
    unsigned long long g =ceil((tst*1.0)/2);
    tst%2==0 ? cout<<g : cout<<"-" <<g;
    return 0;
}