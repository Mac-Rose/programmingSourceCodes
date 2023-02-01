#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            int g=max(ar[i],ar[i+1]);
            int m=min(ar[i],ar[i+1]);
            if(m*2<g)
            {
                int j=1;
                while(m*pow(2,j)<g)
                {
                    j++;
                }
                j-=1;
                k+=j;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}