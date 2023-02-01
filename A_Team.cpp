#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    int count=0;
    cin>>tst;
    while(tst--)
    {
        int s,d,g;
        cin>>s>>d>>g;
        if(s+d+g>1) count++;
    }
    cout<<count;
    return 0;
}