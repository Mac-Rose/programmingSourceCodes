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
        string a;
        cin>>a;
        if(count(all(a),'1')==1) cout<<"0\n";
        else
        {
            if(count(all(a),'1')==2) cout<<"1\n";
            else if(count(all(a),'0')==1) cout<<"1\n";
            else if(count(all(a),'0')==1) cout<<"0\n";
        }
        
    }
}