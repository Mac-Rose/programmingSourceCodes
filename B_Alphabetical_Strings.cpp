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
        string a;
        cin>>a;
        vi g(26,0);
        for(int i=0;i<a.size();i++)
        {
            g[a[i]-97]++;
        }
        int p=0;
        for(int i=0;i<a.size();i++)
        {
            if(g[i]!=1)
            {
                cout<<"NO\n";
                p=1;
                break;
            }
        }
        if(p==1) continue;
        int flag=0;
        int k=0;
        string b="bcdefghijklmnopqrstuvwxyz";
        vector<char> v(all(b));
        int f=a.find("a");
        int l=f;
        while(k<a.size()-1)
        {
                if(a[f+1]==v[k]) f++;
                else if(a[l-1]==v[k]) l--;
                
            
            else 
            {
                flag=1;
                break;
            }
            k++;
        }
        (flag==1)?cout<<"NO":cout<<"YES";
        cout<<endl;
    }
}