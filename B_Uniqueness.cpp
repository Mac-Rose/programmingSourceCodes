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
#define all(c) (c).begin(),(c).end()

int corans(int n, vi &v)
{
    vector<int>a;
    map<int,int>m,mp;
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(m[v[i]])
        {
            flag=false;
        }
        if(flag)
        {
        m[v[i]]++;
        a.pb(v[i]);
        }
    }
    int sz=a.size(),ans=n;
    for(int i=0;i<=sz;i++)
    {   int cnt=0;
        for(int j=0;j<i;j++)
        {
            mp[v[j]]++;
            cnt++;
        }
        for(int j=n-1;j>=0;j--)
        {
            if(mp[v[j]])break;
            mp[v[j]]++;
            cnt++;
        }
        ans=min(ans,n-cnt);
        
        mp.clear();
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(NULL));
    int tst;
    tst=1000000;
    while(tst--)
    {
        int n;
        n=10;
        vi v(n);
        for(auto &it:v) 
        {
            it=rand()%500+1;
        }
        
        set<int> s(all(v));
        
        int ans1=0,ans2=0;
        map<int,int> m1;
        for(int i=0;i<n;i++)
        {
            m1[v[i]]++;
            if(m1[v[i]]==2) 
            {
                ans1=i;
                break;
            }
        }
        reverse(all(v));
        for(int i=0;i<n;i++)
        {
            m1[v[i]]++;
            if(m1[v[i]]>=2) 
            {
                ans2=v.size()-1-i;
                break;
            }
        }
        ans2-=ans1; ans2++;

        
        int ans3=0,ans4=0;
        map<int,int> m2;
        for(int i=0;i<n;i++)
        {
            m2[v[i]]++;
            if(m2[v[i]]==2) 
            {
                ans3=i;
                break;
            }
        }
        reverse(all(v));
        for(int i=0;i<n;i++)
        {
            m2[v[i]]++;
            if(m2[v[i]]>=2) 
            {
                ans4=v.size()-1-i;
                break;
            }
        }
        ans4-=ans3; ans4++;
        int ans=min(ans2,ans4);
        if(s.size()==v.size()) 
        {
            ans=0;
        }
        if(ans!=corans(10,v))
        {
            cout<<10<<endl;
            for(auto it:v) cout<<it<<" ";
            cout<<endl;
            cout<<corans(10,v)<<" "<<ans;
            break;
        }
    }
}