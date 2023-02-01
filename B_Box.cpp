#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        if(n==1)
        {
            int g;
            cin>>g;
            if(g==1) cout<<1;
            else cout<<-1;
            cout<<endl;
            continue;
        }
        vi v,visited(n,0);
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        if(v.back()!=n) 
        {
            cout<<-1;
            cout<<endl;
            continue;
        }
        int flag=0;
        for(int i=1;i<n;i++)
        {
            if(v[i]<v[i-1]) 
            {
                cout<<-1<<endl;
                flag=1;
                break;
            }
            else if(v[i]==v[i-1])
            {
                v[i]=0;
            }
            else visited[v[i]-1]++;
        }
        if(flag) continue;
        vector <int> s;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            s.pb(i);
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(s[k]<i) 
                {
                    cout<<-1<<endl;
                    flag=1;
                    break;
                }
                v[i]=s[k]+1;
            }
        }
        if(flag) continue;
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}