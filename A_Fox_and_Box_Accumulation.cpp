// Problem: A. Fox and Box Accumulation
// Contest: Codeforces - Codeforces Round #228 (Div. 1)
// URL: https://codeforces.com/problemset/problem/388/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
//#define int long long
#define S second

/*****************************
 * You can't a blood a stone.*
 *****************************/

bool check(int i, vi v)
{
    int n=v.size();
    for(int j=n-1,k=1;j>=0;j--,k++)
    {
        if(v[j]>=k);
        else return false;
    }
    return true;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi v(n);
    
    for(auto &it:v) cin>>it;
    sort(all(v),greater<int>());
    
    for(int mi=1;mi<=n;mi++)
    {
        map<int,vi> ma;
        int m=mi;
        for(int i=0;i<n;i++)
        {
            if(check(v[i],ma[i%m])==true) ma[i%m].pb(v[i]);
            else 
            {
                if(i%m==0) break;
                int flag=0;
                for(int j=(i%m)-1;j>=0;j--)
                {
                    if(check(v[i],ma[j])==true)
                    {
                        m=j;
                        flag=1;
                        break;
                    }
                }
                if(flag==0) break;
                ma[m].pb(v[i]);
            }
            if(i==n-1)
            {
                cout<<m;
                exit(0);
            }
        }
    }
}