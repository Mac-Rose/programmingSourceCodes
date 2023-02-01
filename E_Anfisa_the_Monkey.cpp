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
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int req;
    if(s.size()<a*n or s.size()>b*n) 
    {
        cout<<"No solution";
        exit(0);
    }
    else req=s.size()/n;
        
    int count=0;
    cout<<s[0];
        for(int j=1;j<s.size();j++)
        {
            if((j)%req==0 and count!=n-1) 
            {
                cout<<endl;
                cout<<s[j];
                count++;
            }
            else cout<<s[j];
        }
}