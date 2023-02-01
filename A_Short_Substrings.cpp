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
        string a;
        cin>>a;
        cout<<a[0]<<a[1];
        int i=3;
        while(i<a.size())
        {
            cout<<a[i];
            i+=2;
        }
        cout<<endl;
    }
}