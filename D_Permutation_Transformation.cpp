// Problem: D. Permutation Transformation
// Contest: Codeforces - Codeforces Round #702 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1490/D
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

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/

void gen(vi v,int f,int l,vi &ans,int i)
{
	if(f>l) return;
    int mid=max_element(v.begin()+f,v.begin()+l+1)-v.begin();
	ans[mid]=i;
	i++;
	gen(v,mid+1,l,ans,i);
	gen(v,f,mid-1,ans,i);
}
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
		vi v(n),ans(n,0);
		for(auto &it:v) cin>>it;
		gen(v,0,n-1,ans,0);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
    }
}