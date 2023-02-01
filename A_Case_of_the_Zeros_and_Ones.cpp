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
    int n;
    cin>>n;
    string a;
    cin>>a;
    for(int i=0;i<a.size()-1 and a.size()!=0;i++)
    {
        if(a[i]!=a[i+1])
        {
            a.erase(i,2);
            i-=2;
            if(i<-1) i=-1;
        }
    }
    cout<<a.size();
}