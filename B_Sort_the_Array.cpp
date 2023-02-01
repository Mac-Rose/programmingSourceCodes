// Problem: B. Sort the Array
// Contest: Codeforces - Codeforces Round #258 (Div. 2)
// URL: https://codeforces.com/problemset/problem/451/B
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
#define F first
//#define int long long
#define S second

/*****************************************
 * I had a couple of seed I made a forest*
 * ***************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi v(n);
    for(auto &it:v)
    {
    	cin>>it;
    }
    vi s;
    s=v;
    sort(s.begin(),s.end());
    if(s==v) 
    {
    	cout<<"yes";
    	cout<<endl;
    	cout<<1<<" "<<1;
    	exit(0);
    }
    int last_index=0;
    int i,l;
    int count=0;
    for(i=0;i<n;i++)
    {
    	if(count==2)
    	{
    		cout<<"no";
    		exit(0);
    	}
    	if(v[i]!=s[i])
    	{
    		auto it=find(v.begin()+i,v.end(),s[i]);
    		last_index=it-v.begin();
    		vi subv(v.begin()+i,it+1);
    		vi subs(s.begin()+i,s.begin()+last_index+1);
    		reverse(subs.begin(),subs.end());
    		if(subv==subs) 
    		{
    			count++;
    			l=i+1;
    			i=last_index+1;
    		}
    		else 
    		{
    			cout<<"no";
    			exit(0);
    		}
    	}
    }
    cout<<"yes\n";
    cout<<l<<" "<<last_index+1;
}