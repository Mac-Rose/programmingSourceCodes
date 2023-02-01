// Problem: B. Last Year's Substring
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1462/B
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
		string a;
		cin>>a;
		bool flag=false;
		string res="";
        int t=n-4;
		for(int i=0;i<=4;i++)
		{
			res=a.substr(0,i);
			res+=a.substr(i+t,4-i);
			if(res=="2020") 
			{
				flag=true;
				break;
			}
		}
		(flag)?cout<<"YES":cout<<"NO";
		cout<<endl;
    }
}