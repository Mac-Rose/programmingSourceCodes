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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int ans=0;
    int s=0,count=0;
    vi v(n);
    for(auto &it:v) 
    {
        cin>>it;
    }
    int front=0,back=0;
    
    while(front<n)
    {
        if(v[front]>m)
        {
            count=0,s=0;
            front++;
            back++;
            continue;
        }
        count++;
        if(s+v[front]>m)
        {
            while(s+v[front]>m and back<n)
            {
                s-=v[back];
                count--;
                back++;
            }
            s+=v[front];
        }
        else 
        {
            s+=v[front];
            ans=max(count,ans);
        }
        front++;
    }
    cout<<ans;
}