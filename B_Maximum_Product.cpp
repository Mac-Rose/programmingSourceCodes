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
        vector<long long> v;
        vector<signed long long> m;
        long long g;
        for(int i=0;i<n;i++)
        {
            cin>>g;
            v.push_back(g);
        }
        sort(v.begin(),v.end());
        
        signed long long a,b,c,d;
        a=v[0]*v[1];
        
        b=v[2]*v[3];
        
        d=v[n-1]*v[n-2];
        
        c=v[n-3]*v[n-4];
        m.push_back(a*b*v[n-1]);
        m.push_back(a*d*v[n-3]);
        m.push_back(c*d*v[n-5]);
        sort(m.begin(),m.end(),greater<signed long long int>());
        cout<<m[0]<<endl;
    }
    return 0;
}