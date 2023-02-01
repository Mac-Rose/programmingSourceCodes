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
        int n,d;
        cin>>n;cin>>d;
        long ans=0;
        long ar[d]={0};
        for(int i=0;i<n;i++)
        {
            long g;
            cin>>g;
            ar[g%d]++;
        }
        long long s;
        if(ar[0]!=0) s=1;
        else s=0;
        ar[0]=0;
        if(d & 1)
        for(int i=1;i<d/2;i++)
            {
                if(ar[i]==ar[d-i]) 
                {
                    ar[i]=0;
                    ar[d-i]=0;
                }
                else 
                {
                    ar[d-i]=max(ar[i],ar[d-i])-(min(ar[i],ar[d-i])+1);
                    ar[i]=0;
                }
                s+=1;
            }
        else
        {
            if(ar[d/2]>0) s+=1;
            ar[d/2]=0;
            for(int i=1;i<d/2;i++)
            {
                if(ar[i]==ar[d-i]) 
                {
                    ar[i]=0;
                    ar[d-i]=0;
                }
                else 
                {
                    ar[d-i]=max(ar[i],ar[d-i])-(min(ar[i],ar[d-i])+1);
                    ar[i]=0;
                }
                s+=1;
            }
        }
        if(n==1) cout<<1<<endl;
        else
        {for(int i=1;i<d;i++)
        {
            s+=ar[i];
        }
        cout<<s<<endl;}
    }
    return 0;
}