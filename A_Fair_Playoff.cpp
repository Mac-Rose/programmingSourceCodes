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
        vi v(4);
        for(auto &it:v)
        {
            cin>>it;
        }
        vi v1;
        v1=v;
        sort(v1.begin(),v1.end());
        int max1=v1[3],max2=v1[2];
        if(find(v.begin(),v.begin()+2,max1)!=v.begin()+2 and find(v.begin(),v.begin()+2,max2)==v.begin()+2) cout<<"YES";
        else if(find(v.begin(),v.begin()+2,max2)!=v.begin()+2 and find(v.begin(),v.begin()+2,max1)==v.begin()+2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}