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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        vi s;
        int visited[n+1]={0};
        for(int i=0;i<2*n;i++)
        {
            int g;
            cin>>g;
            if(visited[g]==0)
            {s.pb(g);visited[g]++;}
        }
        for(auto it:s)
        cout<<it<<" ";
        cout<<endl;
    }
}