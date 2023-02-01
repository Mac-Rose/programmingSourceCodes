#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        vector<int> v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            v.push_back(d);
        }
        v.push_back(0);
        int ma=1,t;
        int i=0;
        while(i<n)
        {
            t=1;
            if(v[i+1]==v[i])
            {
                for(;v[i]==v[i+1];i++)
                {
                    t+=1;
                    if(t>ma)
                        ma=t;
                }
            }
            else i++;
        }
        cout<<ma<<"\n";
    }
    return 0;
}