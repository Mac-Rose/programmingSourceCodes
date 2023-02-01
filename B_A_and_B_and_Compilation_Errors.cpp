#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi result;

    multiset<int> a,b,c;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        a.emplace(g);
    }
    for(int i=0;i<n-1;i++)
    {
        int g;
        cin>>g;
        b.emplace(g);
    }
    set_difference(a.begin(),a.end(),b.begin(),b.end(),inserter(result, result.end()));
    cout<<*result.begin();
    for(int i=0;i<n-2;i++)
    {
        int g;
        cin>>g;
        c.emplace(g);
    }
    cout<<endl;
    set_difference(b.begin(),b.end(),c.begin(),c.end(),inserter(result, result.end()));
    cout<<*(result.begin()+1);
}