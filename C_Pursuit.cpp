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
        int n;
        cin>>n;
        int N=n;
        vi y(n),il(n);
        int si=0,sy=0;
        for(auto &it:y) {cin>>it;}
        for(auto &it:il) {cin>>it;}
        sort(all(y),greater<int>());
        sort(all(il),greater<int>());
        sy=accumulate(y.begin(),y.begin()+n-n/4,0);
        if(accumulate(y.begin(),y.begin()+n-n/4,0)>=accumulate(il.begin(),il.begin()+n-n/4,0)) cout<<0;
        else
        {
            int req=accumulate(il.begin(),il.begin()+n-n/4,0);
            list<int> v(il.begin()+n-n/4,il.end());
            list<int> g(y.begin(),y.begin()+n-n/4);
            while(req>sy)
            {
                n++;
                if(n%4==0) 
                {
                    sy-=g.back()-100;
                    g.pop_back();
                    g.push_front(100);
                    v.pb(0);
                }
                else
                {
                    v.pb(0);
                    req+=v.front();
                    v.pop_front();
                    sy+=100;
                    g.push_front(100);
                }
            }
            cout<<n-N;
        }
        cout<<endl;
    }
}