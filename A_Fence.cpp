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
        long long ar[3];
        cin>>ar[0];
        cin>>ar[1];
        cin>>ar[2];
        sort(ar,ar+3); 
        if(ar[2]!=1) cout<<ar[2]-1<<endl;
        else cout<<ar[2]<<endl;
    }
    return 0;
}