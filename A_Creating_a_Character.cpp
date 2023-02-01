// Problem: A. Funky Numbers
// Contest: Codeforces - Codeforces Round #121 (Div. 2)
// URL: https://codeforces.com/problemset/problem/192/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define F first
#define int long long
#define S second

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi v(4*10e4);
    int k=1;
    for(auto &it:v) 
    {
    	it=k*(k+1)/2;
    	k++;
    }
    for(int i=0;i<v.size();i++)
    {
        int N=n-v[i];
        if(binary_search(all(v),N) ) 
        {cout<<"YES" ;exit(0);}
    }
    cout<<"NO";
}