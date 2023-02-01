// Problem: C. Bear and String Distance
// Contest: Codeforces - Educational Codeforces Round 8
// URL: https://codeforces.com/contest/628/problem/C
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
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;
    string a,ans;
    cin>>a;
    ans=a;
    int i=0;
    while(k>0 and i<n)
    {
    	if(a[i]-96>13 and k>0)
    	{
    		if(k-a[i]+97>=0)
    		{ans[i]='a';
    		k-=a[i]-97;}
    		else 
    		{
    			ans[i]-=k;
                k=0;
    			break;z
    		}
    	}
    	else if(a[i]-96<=13 and k>0)
    	{
    		if(k-122+a[i]>=0)
    		{ans[i]='z';
    		k-=122-a[i];}
    		else 
    		{
    			ans[i]+=k;
                k=0;
    			break;
    		}
    	}
    	i++;
    }
    if(k>0) cout<<-1;
    else cout<<ans;
}