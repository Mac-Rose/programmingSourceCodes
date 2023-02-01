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
    string a;
    cin>>a;
    string b,c;
    int ca=1,cb=0;
    for(int i=1;i<n;i++)
    {
        cin>>b;
        if(b==a) ca++;
        else 
        {
            c=b;
            cb++;
        }
    }
    if(ca>cb) cout<<a;
    else cout<<c;
}