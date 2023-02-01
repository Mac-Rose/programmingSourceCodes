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
    int n,x;
    cin>>n>>x;
    vector<long long> gift;
    for(int i=0;i<n;i++)
    {
        long long f;
        cin>>f;
        gift.emplace_back(f);
    }
    sort(gift.begin(),gift.end());
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int k;
        cin>>k;
        int g=(k-1)/x;
        cout<<gift[g]<<" ";
    }
    return 0;
}