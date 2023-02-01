#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

int no(char c, int si)
{
    int re=0;
    for(int i=0;i<si;i++)
    {
        re+=pow(10,i);
    }
    re=(c-'0')*re;
    return re;
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
        int si=int(log10(n) + 1);
        if(si==1)
        {
            cout<<n<<"\n";
            continue;
        }
        else
        {
            string a=to_string(n);
            int re=0;
            if(n<no(a[0],si)) re=a[0]-'0'-1;
            else re=a[0]-'0';
            cout<<9*(si-1)+re;
        }
        cout<<endl;
    }
}