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
    int m=0,c=0;
    for(int i=0;i<n;i++)
    {
        int g,h;
        cin>>g>>h;
        if(g>h) m++;
        else if(h>g) c++;
    }
    if(c!=m)
    {
        (c>m)? cout<<"Chris" : cout<<"Mishka";
    }
    else cout<<"Friendship is magic!^^";
}