#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        long h=(pow(2,n)+2*(pow(2,(n/2)-1)-1));
        long g=( pow(2,n/2) *(pow(2,(n/2))-1) );
        long long ans=h-g;

        cout<<ans<<"\n";
    }
    return 0;
}