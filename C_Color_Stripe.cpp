#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector <char> v={'a','b','b','a','c','c'};
    unique(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it;
    }
}