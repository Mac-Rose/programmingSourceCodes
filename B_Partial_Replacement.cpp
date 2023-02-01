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
        int k;
        cin>>k;
        string a,b;
        cin>>a;
        b=reverse(a.begin(),a.end());
        int i=0;
        a[a.find("*")]='X';
        
        if(b.find("*")!=-1) b[b.find("*")]='X';
        else
        {
            cout<<1<<"\n";
            continue;
        }
        while (true) 
        {  
            if(distance( (find(a.begin(),a.end(),"X") , (find(a.begin(),a.end(),"X")) >k)
            {
                
            }
        }
    }
}