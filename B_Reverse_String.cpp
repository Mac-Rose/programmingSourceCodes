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
        string a,b;
        cin>>a>>b;
        string g=a;
        reverse(all(g));
        if(g.find(b)!=-1)
        {
            cout<<"YES\n";
            continue;
        }
        vi start;
        for(int i=0;i<a.size();i++)
        {
            if(b[0]==a[i] )
            start.pb(i);
        }
        string ans="NO\n";
        for(int i=0;i<start.size();i++)
        {
            int k=start[i];
            int j=0;
            int flag=1;
            while(j<b.size())
            {
                if(b.substr(j,b.size()-j)==g.substr(a.size()-1-k,b.size()-j))
                {
                    ans="YES\n";
                    flag=2;
                    break;
                }
                k++;
                j++;
                if(a[k]!=b[j])
                {
                    break;
                }
            }
            if(flag==2) break;
        }
        cout<<ans;
    }
}