#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int c5=0,c0=0;
    while(tst--)
    {
        int n;
        cin>>n;
        if(n==5) c5++;
        else c0++;
    }
    if((c5)/9>0 and c0>0) 
    {
        for (int i = 1; i <= 9*((c5)/9); i++)
        {
            cout<<5;   
        }
        for(int i=0;i<c0;i++)
        {
            cout<<0;
        }
    }
    else if(c0==0)cout<<-1;
    else cout<<0;   
    return 0;
}