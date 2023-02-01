#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tst;
    cin>>tst;
    vector<long long> v;
    while(tst--)
    {
        long long n;
        cin>>n;
        v.push_back(n);
    }
    long long  ma=1,p=1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]<=v[i+1]) 
        {
            p++;
            ma=max(ma,p);
        }
        else p=1;
    }
    cout<<ma;
    return 0;
}