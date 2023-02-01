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
        vi v(n);
        int ma=INT_MAX;
        for(auto &it:v)
        {
            cin>>it;
        }
        int stor=0;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1]<ma) 
            {
                ma=v[i]-v[i-1];
                stor=i;
            }
        }
        cout<<v[stor-1]<<" ";
        
        for(int i=stor+1;i<n;i++) cout<<v[i]<<" ";
        for(int i=0;i<stor-1;i++) cout<<v[i]<<" ";
        cout<<v[stor];
        cout<<endl;
    }
}