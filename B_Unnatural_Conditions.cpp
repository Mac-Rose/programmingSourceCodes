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
    int x,y;
    cin>>x>>y;
    string a="4",b="5";
    for(int i=0;i<281;i++)
    {
        a+='5';
        b+='4';
    }
    b.back()='5';
    cout<<a<<endl;
    cout<<b;
}