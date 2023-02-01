// Problem: B. Lost Numbers
// Contest: Codeforces - Educational Codeforces Round 65 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1167/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
#define int long long
#define S second

bool check(ll i)
{
    bool ans=false;
    vi w{4, 8, 15, 16, 23, 42};
    for(auto it:w)
    {
        if(it==i) {ans=true;break;}
    }
    return ans;
}
vector<long long> allDivisiors(long long n){
    vector<long long>divisors;
    ll limit=sqrt(n+1);
    for(ll i=1; i<=limit; i++){
        if(n%i==0){
            if(n/i==i) 
            {
                if(check(i))
                divisors.push_back(i);
            }
            else 
            {
                if(check(i))
                divisors.push_back(i);
                if(check(n/i))
                divisors.push_back(n/i);
            }
        }
    }
    return divisors;
}
/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi ans(6,0);
    int a1,a2;

    cout<<"? 1 2"<<endl;
    cin>>a1;
    vi k;
    k = allDivisiors(a1);
    vi g(all(k));
    k.clear();
    cout<<"? 2 3"<<endl;
    cin>>a2;
    k=allDivisiors(a2);
    g.insert(g.end(),all(k));
    k.clear();
    sort(all(g));

    for(int i=0;i<g.size()-1;i++)
    {
    	if(g[i]==g[i+1] and check(a1/g[i]) and check(a2/g[i]) and a1/g[i]!=g[i] and a2/g[i]!=g[i])
    	{
    		ans[1]=g[i];
    		ans[0]=a1/g[i];
    		ans[2]=a2/g[i];
    		break;
    	}
    }
    g.clear();

    cout<<"? 4 5"<<endl;
    cin>>a1;
    k=allDivisiors(a1);
    g.insert(g.end(),all(k));
    k.clear();

    cout<<"? 5 6"<<endl;
    cin>>a2;
    k=allDivisiors(a2);
    g.insert(g.end(),all(k));
    k.clear();
    sort(all(g));
    for(int i=0;i<g.size()-1;i++)
    {
    	if(g[i]==g[i+1] and check(a1/g[i]) and check(a2/g[i]) and a1/g[i]!=g[i] and a2/g[i]!=g[i])
    	{
    		ans[4]=g[i];
    		ans[3]=a1/g[i];
    		ans[5]=a2/g[i];
    		break;
    	}
    }
    g.clear();
    cout<<"! ";
    for(auto it:ans) cout<<it<<" ";
    cout<<endl;
}