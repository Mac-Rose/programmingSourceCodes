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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        string a ;
        cin>>a;
        vector <char> v(a.begin(),a.end());
        auto it=unique(v.begin(),v.end());
        v.resize(distance(v.begin(),it));
        set<char> s(v.begin(),v.end());
        if(v.size()==s.size()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}