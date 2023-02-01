// Problem: B1. Wonderful Coloring - 1
// Contest: Codeforces - Codeforces Round #734 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1551/B1
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

//typedef long long ll;
typedef vector<int> vi;
//typedef pair<int,int> pii;

// #define pb push_back
// #define mp make_pair
// #define all(c) (c).begin(),(c).end()
// #define F first
// #define int long long
// #define S second

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
		string a;
		cin>>a;
		vi s(26,0);
		int n=a.size();
		for(int i=0;i<n;i++) s[a[i]-97]++;
        int i=0;
        int ans=0;
        for(auto it:s) ans+=min(it,2);
		cout<<ans/2<<endl;
    }
}