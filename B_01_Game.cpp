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
        string a;
        cin>>a;
        int o=0,z=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='1') o++;
            else z++;
        }
        if(min(o,z)%2==0) cout<<"NET";
        else cout<<"DA";
        cout<<endl;
    }
}