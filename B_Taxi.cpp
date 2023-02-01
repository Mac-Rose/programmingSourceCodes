#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tst;
    cin>>tst;
    int n,su=0;
    int ar[4]={0};
    while(tst--)
    {
        cin>>n;
        ar[n-1]++;
    }
    su+=ar[3];
    if(ar[1]%2==0)  
    {
        su+=ar[1]/2;
        ar[1]=0;
    }
    else
    {
        su+=ar[1]/2;
        ar[1]=1;
    }
    
    if(ar[0]>=ar[2]) 
    {
        su+=ar[2];
        ar[0]-=ar[2];
        if(ar[1]==1)
        {
            su+=1+ceil(((ar[0]-2)*1.0)/4);
        }
        else
        {
            su+=ceil((ar[0]*1.0)/4);
        }
        
    }
    else
    {
        su+=ar[0];
        ar[2]-=ar[0];
        su+=ar[2]+ar[1];
    }
    cout<<su;
    return 0;
}