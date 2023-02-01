#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

int next_prime(int a,int b)
{
    int ans=0;

}
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
        vi v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        int flag=0;
        int count=0;
        
        for(int i=1;i<n;i++)
        {
            if(__gcd(v[i],v[i-1])!=1) 
            {
                flag=1;
                count++;
                cout<<i<<" "<<i+1<<" ";
                int x,y;
                y=min(v[i],v[i-1]);
                cout<<min(v[i],v[i-1])<<" ";
                
                if(i-2>0) x=next_prime(min(v[i],v[i-1]),v[i-2]);
                else x=next_prime(min(v[i],v[i-1]),1);
                cout<<x;
                v[i]=x;
                v[i-1]=y;
                cout<<endl;
            }
        }
    }
}