#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        long n,count=0;
        cin>>n;
        long v[2*n+1]={0};
        for(int i=0;i<n;i++)
        {
            long d;
            cin>>d;
            if(v[d-1]==0)
            v[d-1]++;
            else if(v[d-1]>=1)
            v[d]++;
            
        }
        for(int i=0;i<2*n+1;i++)
        {
            if(v[i]!=0) count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}