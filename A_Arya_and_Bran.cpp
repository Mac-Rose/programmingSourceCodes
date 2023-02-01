// Problem: A. Arya and Bran
// Contest: Codeforces - Codeforces Round #428 (Div. 2)
// URL: https://codeforces.com/problemset/problem/839/A
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
    int n,k;
    cin>>n>>k;
    int s=0,rem=0;
    for(int i=0;i<n;i++)
    {
    	int it;
    	cin>>it;
    	it+=rem;
    	if(it>8)
    	{
    		rem=it-8;
    		s+=8;
    	}
    	else
    	{
    		s+=it;
            rem=0;
    	}
    	if(s>=k) 
    	{
    		cout<<i+1;
    		exit(0);
    	}
    }
    if(s<k) cout<<-1;
}