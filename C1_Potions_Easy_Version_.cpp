#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int count=0;
    vi v;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        if(g>=0) 
        {
            s+=g;
            count++;
        }
        else v.pb(-1*g);
    } 
    
}