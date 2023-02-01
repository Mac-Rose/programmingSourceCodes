#include<bits/stdc++.h>
using namespace std;

signed main()
{
 int n;
 cin>>n;
 int k=1;
 vector< pair<double,string>> v;
 while(k<=n)
 {
    if(k==n) v.push_back(make_pair(1,"1/1"));
    else
        for(int i=n;i>k;i--)
        {
            if (__gcd(i,k)!=1) ;
            else
            v.push_back(make_pair((k*1.0)/i,to_string(k)+"/"+to_string(i)));
        }
    k++;
 }
 int g;
 cin>>g;
 sort(v.begin(),v.end());
 cout<<v[g-1].second;
}
