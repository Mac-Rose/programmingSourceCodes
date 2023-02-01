// Problem: B. Red and Blue
// Contest: Codeforces - Educational Codeforces Round 101 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1469/B
// Memory Limit: 512 MB
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
		int n,m;
		cin>>n;
		vi v,t;
        int temp1=0,temp2=0,ans1=0,ans2=0;
		for(int i=0;i<n;i++)
		{
			int g;
			cin>>g;
			temp1+=g;
            if(temp1>ans1) ans1=temp1;
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int g;
			cin>>g;
			temp2+=g;
            if(temp2>ans2) ans2=temp2;
		}
		cout<<ans1+ans2<<endl;
    }
}