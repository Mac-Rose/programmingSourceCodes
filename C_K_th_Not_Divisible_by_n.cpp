// Problem: C. K-th Not Divisible by n
// Contest: Codeforces - Codeforces Round #640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/C
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
    int tst;
    cin>>tst;
    while(tst--)
    {
		int n,m;
		cin>>n>>m;
		int rem=m%n+m/n;
        m-=m%n;
        m+=rem;
        while(rem>=n)
        {
            int k=rem%n;
            rem/=n;
            rem+=k;
            m-=m%n;
            m+=rem;
        }
        cout<<m<<endl;
    }
}