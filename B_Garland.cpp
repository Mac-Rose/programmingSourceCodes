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
    vi ag(26,0),bg(26,0);
    string a ;
    string b;
    cin>>a>>b;
    
    int i=0;
    while(i!=a.size())
    {
        ag[a[i]-97]++;
        i++;
    }
    i=0;
    while(i!=b.size())
    {
        bg[b[i]-97]++;
        i++;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(bg[i]!=0 and ag[i]==0) 
        {
            cout<<-1;
            exit(0);
        }
        ans+=min(ag[i],bg[i]);
    }
    cout<<ans;
}