#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
        string a;
        cin>>a;
        ll ans=1;
        if(a.size()==1) 
        {
            if(a[0]=='4') cout<<1;
            else cout<<2;
            exit(0);
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='7') ans+=pow(2,a.size()-1-i);
        }
        for(int i=1;i<=a.size()-1;i++)
        {ans+=pow(2,i);}
        cout<<ans;
    
}