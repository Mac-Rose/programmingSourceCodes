#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n;
    cin>>k;
    string a;
    cin>>a;
    int ans=0;
    int i=0;
    int o=0;
    while(i<n)
    {
        if(i+k==o) 
        {
            ans=-1;
            break;
        }
        if(a[i+k]=='1')
        {
            o=i+k;
            i=i+k;
            ans++;
            if(i==n-1) break;
        }
        else i--;
    }
    cout<<ans;
}