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
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    int start=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='G' or a[i]=='T')
        {
            start=i;
            break;
        }
    }
    start+=k;
    for(;start<n;start+=k)
    {
        if(a[start]=='G' or a[start]=='T')
        {
            cout<<"YES";
            exit(0);
            break;
        }
        if(a[start]=='#') break;
    }
    cout<<"NO";
}