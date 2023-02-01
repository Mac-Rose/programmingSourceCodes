#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst,fl;
    long long mi;
    cin>>tst;
    while(tst--)
    {
        fl=1;
        int n,d;
        cin>>n;
        vector<int> g;
        int v[n+1]={0};
        for(int i=0;i<n;i++)
        {
            cin>>d;
            g.push_back(d);
            v[d]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(v[i]==1)
            {
                auto it=find(g.begin(),g.end(),i);
                cout<<(it-g.begin())+1;
                fl=0;
                break;
            }
        }
        if(fl==1) cout<<-1;
        cout<<"\n";
    }
    return 0;
}