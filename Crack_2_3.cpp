#include<bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define SORT(v) sort(all(v))
#define int long long
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n"

using namespace std;


void solve()
{
  int a, b, c, d, e;
  cin>>a>>b>>c>>d>>e;

  int temp1 = min(a , b) + c;
  int temp2 = min(d, e);

  cout<<min(temp1, temp2)<<endl;
  
}


signed main()
{
    solve();
    return 0;
}