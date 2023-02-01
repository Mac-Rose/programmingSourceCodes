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
        long long n,k;
        cin>>n>>k;
        for(int i=3;i<k;i++)
        {
            cout<<1<<" ";
            n--;
        }
        k=3;
        if(n & 1) 
        {
            cout<<fixed<<setprecision(0)<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
        }
        else
        {
            if(n%4==0) cout<<fixed<<setprecision(0)<<n/4<<" "<<n/2<<" "<<n/4<<endl;
            else cout<<fixed<<setprecision(0)<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
        
    }
    return 0;
}