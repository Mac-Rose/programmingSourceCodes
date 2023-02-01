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
        int l=0;
        if(n>30) 
        {
            cout<<"YES\n";
            if(n-30 == 6) 
            {
                l=n-31;cout<<6;
                cout<<" "<<10<<" "<<15<<" "<<l<<endl;
            }
            else if(n-30 == 10)
            {
                l=n-31;cout<<10;
                cout<<" "<<6<<" "<<15<<" "<<l<<endl;
            }
            else if(n-30 == 14)
            {
                l=n-31;cout<<15;
                cout<<" "<<10<<" "<<6<<" "<<l<<endl;
            }
            else
            {
                l=n-30;cout<<6;
                cout<<" "<<10<<" "<<14<<" "<<l<<endl;
            }
        }
        else cout<<"NO\n";
    }
    return 0;
}