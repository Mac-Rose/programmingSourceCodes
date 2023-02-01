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

int rem(int chance,int no)
{
    int ans=0;
    if(chance==1)
    {
        for(int i=no+1;i<10;i++)
        if(i&1) ans++;
    }
    else
    {
        for(int i=no+1;i<10;i++)
        if(i%2==0) ans++;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        vector<char> v(10,'?');
        for(auto &it:v) cin>>it;
        int e=0,o=0,bo=0,be=0;
        int i=0;
        while(i<10)
        {
            if(i&1)
            {
                if(v[i]=='1') o++;
                else if(v[i]=='?') 
                {
                    bo++;
                }
            }
            else
            {
                if(v[i]=='1') e++;
                else if(v[i]=='?') 
                {
                    be++;
                }
            }
            if(e+be>o+rem(1,i)) break;
            if(o+bo>e+rem(0,i)) break;
            i++;
        }
        if(i==10) i=9;
        cout<<i+1<<endl;
    }
}