#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long int n,x;
        long long su=0,m=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            int u;
            cin>>u;
            su+=u;
            m+=ceil(u*1.0/x);
        }
        int long long g=ceil(su*1.0/x);
        cout<<g<<" "<<m<<"\n";
    }
    return 0;
}