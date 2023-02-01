#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

string inver(string a)
{
    string b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='1') b+='0';
        else b+='1';
    }
    return b;
}
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
        string a,b;
        vi v;
        v.pb(-1);
        cin>>a>>b;
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0') c0++;
            else c1++;
            if(c0==c1) v.pb(i);
        }
        int last=*(v.end()-1);
        if(a.substr(last+1,n-1-last)==b.substr(last+1,n-1-last)) ;
        else {cout<<"NO\n";continue;}
        int flag=1;
        for(int i=1;i<v.size();i++)
        {
            if( ( a.substr(v[i-1]+1,v[i]-v[i-1])==b.substr(v[i-1]+1,v[i]-v[i-1]) ) );
            else if( (inver(a.substr(v[i-1]+1,v[i]-v[i-1]))==b.substr(v[i-1]+1,v[i]-v[i-1]) ) );
            else {cout<<"NO\n";flag=0;break;}
        }
        if(flag==1) cout<<"YES\n";
    }
}