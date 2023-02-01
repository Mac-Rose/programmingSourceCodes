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
  int n; cin>>n;
  vector<int>s;

  for(int i = 0; i<n; i++)
  {
    int x; cin>>x;
    s.pb(x);
  }


  int ok = n;
  while(s.size() && s.back() == ok)
  {
    s.pop_back();
    ok--;
  }

  reverse(all(s));
  ok = 1;
  while(s.size() && s.back() == ok)
  {
    s.erase(--s.end());
    ok++;
  }

  if(s.size() == 0)
  {
    cout<<0<<" "<<0;
    return;
  }

  int l = s[0], r = s.back();
  ok = r;
  
  while(s.size() && s.back() == ok)
  {
    ok--;
    s.pop_back();
  }
  
  if(s.size() != 0)
    l = 0, r = 0;

  cout<<l <<" "<<r;

  
}

signed main()
{
    solve();
    return 0;
}