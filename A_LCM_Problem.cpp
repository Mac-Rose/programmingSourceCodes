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
        long long l,r;
        cin>>l>>r;
        if(!(2*l>r)) cout<<l<<" "<<2*l<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}