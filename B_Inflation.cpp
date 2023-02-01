#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
       int n,k;
       cin>>n>>k;
       double coe;
       int s=0;
       vector<double> v,g;
       for(int i=0;i<n;i++)
       {
           int y;
           cin>>y;
           v.push_back(y);
           if(i>0)
           {
               coe=v[i]*100/s;
               g.push_back(coe);
           }
           s+=v[i];
       }

       for(int i=0;i<n-1;i++)
       {
           if(g[i]>k)
           {
               
           }
       }
    }
    return 0;
}