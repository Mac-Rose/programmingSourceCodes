// Problem: B. Balanced Remainders
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
    int tst;
    cin>>tst;
    while(tst--)
    {
		int n;
		cin>>n;
		vi count(3,0);
		vi v(n);
		for(auto &it:v) 
		{
			cin>>it;
			count[it%3]++;
		}
		n=n/3;
		int ans=0;
		int flag=0;
		for(int i=0;flag!=3;i++) 
		{
			if(count[i%3]>n) 
			{
				ans+=count[i%3]-n;
				count[(i+1)%3]+=count[i]-n;
				count[i%3]=n;
			}
			if(count[i%3]==n) flag++;
		}
		cout<<ans<<endl;
    }
}