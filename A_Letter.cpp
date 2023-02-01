#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x,y;
    int tl,br;
    int u,k;
    int flag=1;
    cin>>x>>y;
    char ar[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>ar[i][j];
            if(flag==1 and ar[i][j]=='*') 
            {
                flag=0;tl=i;u=j;k=j;}
            if(ar[i][j]=='*') 
            {
                if(j<u) u=j;
                if(j>k) k=j;
            }
            if(flag==0 and ar[i][j]=='*') 
            {
                br=i;}
        }
    }
    for(int i=tl;i<=br;i++)
    {
        for(int j=u;j<=k;j++)
        {
            cout<<ar[i][j];
        }
        cout<<endl;
    }
    return 0;
}