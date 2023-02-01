#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int x,y,j,flag=1;
        cin>>x>>y;
        int ar[x+1]={0};
        for(int i=0;i<x;i++)
        {
            cin>>ar[i];
        }
        for(int i=0;i<y;i++)
        {
            if(flag==0) break;
            for(j=0;j<=x;j++)
            { 
                if(j==x) 
                {
                    flag=0;
                }
                if(ar[j]>=ar[j+1]) continue;
                else
                {
                    ar[j]++;
                    break;
                }
            }
        }
        if(flag==1)
        cout<<j+1<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}