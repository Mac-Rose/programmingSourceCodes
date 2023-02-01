#include<bits/stdc++.h>
using namespace std;


signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,p;
        int ans=0;
        cin>>n>>p;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int y=0;
            cin>>y;
            s.insert(y);
        }
        int k=0;
        while (*(prev(s.end()))>k)
        {
            
            ans++;
            if(s.size()==1) break;
            s.erase(prev(s.end()));
            k+=p;
        }
        cout<<ans<<"\n";
    }
}
signed main()
{
    int tst;
    cin>>tst;
    int g=1;
    while(tst--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.push_back(g);
        }
        int i=1;
        long cost=0;
        while(i!=n)
        {
            auto it=find(v.begin()+i-1,v.end(),i);
			if(v.begin()+i-1 == it) cost+=1;
            else cost+=distance(v.begin()+i-1,it+1);
            reverse(v.begin()+i-1,it+1);
			
            i++;
        }
        cout<<"Case #"<<g<<": "<<cost<<"\n";
        g++;
    }
}