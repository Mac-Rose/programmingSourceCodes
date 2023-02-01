#include<bits/stdc++.h>
using namespace std;

int main()
{
    long tst;
    cin>>tst;
    while(tst--)
    {
        vector<int> v;
        for(int i=0;i<4;i++)
        {
            long d=0;
            cin>>d;
            v.push_back(d);            
        }
        sort(v.begin(),v.end());
        cout<<fixed<<setprecision(0)<<v[0]*min(v[2],v[3])<<"\n";
    }
    return 0;
}