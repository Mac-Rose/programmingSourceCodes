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
        long long n;
        cin>>n;
        long long l,m=n,k;
        long long c3=0,c2=0;
        long long count=0;
        if(n==1) cout<<0<<endl;
        else if(n%3==0)
        {
            while(n%3==0)
            {
                n/=3;
                c3++;
            }
            while(n%2==0)
            {
                n/=3;
                c2++;
            }
            l=c3-c2;
            if(c3>c2) 
            {count=c3+l;
            k=m*(pow(2,l));
            if(k%6==0)
            {
                
            }

            else cout<<count<<endl;}
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}