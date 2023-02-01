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
#define all(c) (c).begin(),(c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin>>a;
    string ans=a;
    ans[1]=a[2];
    ans[2]=a[4];
    ans[3]=a[3];
    ans[4]=a[1];
    unsigned long long n=stoi(ans);
    unsigned long long k=n;
    for(int  i=0;i<4;i++)
    {
        n*=k;
        string g=to_string(n);
        int y=g.size();
        g=g.substr(y-5,5);
        n=stoi(g);
        if(n==0) {
            cout<<"00000"; exit(0);}
    }
    cout<<n;
}