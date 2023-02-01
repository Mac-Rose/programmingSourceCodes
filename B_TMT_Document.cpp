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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        if(count(a.begin(),a.end(),'M')!=n/3)
        {
            cout<<"NO\n";
            continue;
        }
        int ct=0,cm=0,flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='T') ct++;
            else
            {
                if(!(ct-cm>0 and (((2*(n/3))-ct)-((n/3)-cm-1)>0))) 
                {
                    flag=1;
                    break;
                }
                cm++;
            }
        }
        (flag==0)? cout<<"YES\n" : cout<<"NO\n";
    }
}