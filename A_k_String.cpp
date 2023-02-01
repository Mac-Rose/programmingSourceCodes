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
    int n;
    cin>>n;
    vi v(26,0);
    string a,res;
    cin>>a;
    if(a.size()%n!=0)
    {
        cout<<-1;
        exit(0);
    }
    for(int i=0;i<a.size();i++)
    {
        v[a[i]-'a']++;
    }
    for(int it=0;it<26;it++)
    {
        if(v[it]%n!=0)
        {
            cout<<-1;
            exit(0);
        }
        else
        {
            for(int i=0;i<v[it]/n;i++)
            res+=it+97;
        }
        
    }
    string ans;
    for(int i=0;i<n;i++)
    {
        ans+=res;
    }
    cout<<ans;
}