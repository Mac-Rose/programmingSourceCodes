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
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int rem=abs(k1-k2);
        int re = min(k1,k2)+rem/2;
        int w,b;
        cin>>w>>b;

        if(w>re) 
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            k1=n-k1;
            k2=n-k2;
            rem=abs(k1-k2);
            re = min(k1,k2)+rem/2;
            if(b>re) cout<<"NO\n";
            else cout<<"YES\n";
        }
        
    }
    return 0;
}