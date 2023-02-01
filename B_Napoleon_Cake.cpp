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
        int n;
        cin>>n;
        vector<int> v(n,0),v1(n,0);
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v[i]=g;
        }
        
        int i=n-1;
        int m=0;
        while(i>=0)
        {
            if(v[i]!=0)
            {
                m=i-v[i];
                for(;i>m and i>=0;i--)
                {
                    if(i-v[i]<m) m=i-v[i];
                    v1[i]=1;
                }
            }
            else i--;
        }
        for(auto el:v1)
        {
            cout<<el<<" ";
        }
        cout<<"\n";
    }
    return 0;
}