#include<bits/stdc++.h>
using namespace std;

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    list <int> v;
    v.emplace_back(0);
    for(int i=1;i<n;i++)
    {
    	int it;
    	cin>>it;
    	v.emplace_back(it);
    }
    int a,b;
    cin>>a>>b;
    auto it1=v.begin(), it2=v.begin();
    advance(it2,b);
    advance(it1,a);
    int ans=accumulate(it1,it2,0);
    cout<<ans;
}