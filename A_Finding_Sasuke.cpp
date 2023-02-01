#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,s=0,j;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<-ar[n-1-i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}