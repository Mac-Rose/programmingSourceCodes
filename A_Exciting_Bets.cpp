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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) 
        {
            cout<<"0 0\n";
            continue;
        }
        int x=abs(a-b);
        cout<<x<<" ";
        cout<<min(min(a%x,b%x),min(x-a%x,x-b%x));
        cout<<endl;
    }
}