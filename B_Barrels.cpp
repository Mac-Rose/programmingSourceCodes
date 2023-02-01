#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.push_back(g);
        }
        sort(v.begin(),v.end());
        unsigned long long s=v[n-1];
        for(int i=n-2;i>=n-k-1;i--)
        {
            s+=v[i];
        }
        cout<<s<<endl;
    }
    return 0;
}