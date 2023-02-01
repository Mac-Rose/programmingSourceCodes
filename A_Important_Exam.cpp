// Problem: A. Important Exam
// Contest: Codeforces - Codeforces Round #577 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1201/A
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
    {
		int n,k;
		cin>>n>>k;
		map<int,vi> m;
        for(int i=0;i<k;i++) m.emplace(i, vi(5,0));
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<k;j++)
			{
				char c;
				cin>>c;
				m[j][c-65]++;
			}
		}
		int ans=0;
		vi marks(k);
		for(auto &it:marks) cin>>it;
		for(int i=0;i<k;i++)
		{
			ans+=*max_element(all(m[i]))*marks[i];
		}
		cout<<ans;
    }
}