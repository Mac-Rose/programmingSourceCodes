#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        auto start=find(a.begin(),a.end(),'*');
        auto last=find(a.rbegin(),a.rend(),'*');
        ll dis=-distance(a.begin(),start)+distance(last,a.rend());
        if(dis>0)
        {
            string b=a.substr(start-a.begin(),dis);
            auto it=find(b.begin(),b.end(),'.');
            if(it==b.end()) cout<<0;
            else 
            {
                ll ans=0;
                ll cs=count(b.begin(),b.end(),'*');
                int c=0;
                for(int i=0;i<b.size();i++)
                {
                    if(b[i]=='.') ans+=min(cs-c,c);
                    else c++;
                }
                cout<<ans;
            }
        }
        else cout<<0;
        cout<<"\n";
    }
}