#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int g;
        if(n%2==0) g=n/2-1;
        else g=n/2;
        cout<<g<<"\n";
    }
    return 0;
}