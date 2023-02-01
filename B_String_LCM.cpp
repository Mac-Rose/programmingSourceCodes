// Problem: B. String LCM
// Contest: Codeforces - Educational Codeforces Round 102 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1473/B
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
 ll lcm(int a,int b)
 {
 	return (a*b)/__gcd(a,b);
 }
 
 string sm(string a)
 {
 	string result;
 	for(int i=1;i<=a.size();i++)
 	{
 		result=a.substr(i,a.size()-i)+a.substr(0,i);
 		if(result==a) 
 		{
 			result=a.substr(0,i);
 			break;
 		}
 	}
 	return result;
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
		string a,b;
		cin>>a>>b;
		//now i want to find the samllest unit
		if(sm(a)!=sm(b)) {cout<<"-1\n";continue;}
		string ans=sm(a);
		for(int i=0;i<lcm(a.size(),b.size());i++) cout<<ans[i%ans.size()];
		cout<<endl;
    }
}