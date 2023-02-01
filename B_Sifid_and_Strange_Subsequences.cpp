#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace
#define mp make_pair
#define F first
//#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int count=0;
        set<int> neg,pos;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            if(g<1) 
            {
                neg.pb(g);
                count++;
            }
            else pos.pb(g);
        }
        if(neg.size()==0) cout<<1<<endl;
        else if(pos.size()==0) cout<<count<<endl;
        else if(count==1 and pos.size()!=0) cout<<2<<endl;
        else
        {
            vector<int> v(neg.begin(),neg.end());
            int mi=INT_MAX;
            int temp;
            for(int i=1;i<v.size();i++)
            {
                temp=v[i]-v[i-1];
                mi=min(mi,temp);
            }
            if(*pos.begin()<=mi and count<1+neg.size()) cout<<count+1<<endl;
            else cout<<count<<endl;
        }    
    }
}