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
        set<int> s;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            v.push_back(d);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s.insert(v[j]-v[i]);
            }
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}