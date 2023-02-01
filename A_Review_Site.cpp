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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a!=2) count++;
        }
        cout<<count<<endl;
    }
}