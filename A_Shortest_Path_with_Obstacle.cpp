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
        int ax,ay,bx,by,fx,fy;
        cin>>ax>>ay>>bx>>by>>fx>>fy;
        if((fx==ax and fx==bx and ((fy>ay and fy<by)or (fy<ay and fy>by))) or (fy==ay and fy==by and ((fx>ax and fx<bx)or (fx<ax and fx>bx))))
        {
            cout<<abs(ax-bx)+abs(ay-by)+2;
        }
        else cout<<abs(ax-bx)+abs(ay-by);
        cout<<endl;
    }
}