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
        int ar[101]={0};
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            ar[t]++;
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        auto ip=unique(v.begin(),v.end());
        for(int i=0;i<distance(v.begin(),ip);i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<101;i++)
        {
            if(ar[i]>1) 
            {
                for(int j=0;j<ar[i]-1;j++)
                {
                    cout<<i<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}