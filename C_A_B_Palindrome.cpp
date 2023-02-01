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
        int n,m;
        cin>>n>>m;
        
        string a;
        cin>>a;
        if(n&1 and m&1) 
        {
            cout<<-1;
            cout<<endl;
            continue;
        }
        int flag=0;
        int len=a.size();
        int k;
        if((n+m)&1)
        {
            k=len/2;
            k+=1;
        }
        else k=len/2;
        for(int i=0;i<k;i++)
        { 
            if((len&1) and i==k-1)
            {
                if(a[i]=='?') 
                {
                    if(n&1) 
                    {
                        a[i]='0';
                        n--;
                    }
                    else 
                    {
                        a[i]='1';
                        m--;
                    }
                }
                else
                {
                    if(a[i]=='1') m--;
                    else n--;
                }
                
                break;
            }
            if(a[i]!='?' and a[len-1-i]!='?')
            {
                if(a[i]!=a[len-1-i]) 
                {
                    n=-1;
                    break;
                }
                else if(a[i]=='1') m-=2;
                else n-=2;
            }
            else if(a[i]=='?' and a[len-1-i]!='?') 
            {
                if(a[len-1-i]=='1') 
                {
                    m-=2;
                    a[i]='1';
                }
                else 
                {
                    a[i]='0';
                    n-=2;
                }
            }
            else if(a[i]!='?' and a[len-1-i]=='?') 
            {
                if(a[i]=='1') 
                {
                    a[len-1-i]='1';
                    m-=2;
                }
                else 
                {
                    a[len-1-i]='0';
                    n-=2;
                }
            }
        }
        if(n<0 or m<0) 
        {
            flag=1;
            cout<<-1;
        }
        else
        {
            for(int i=0;i<len/2;i++)
            {
                if(a[i]=='?' and n>0) 
                {
                    a[i]='0';
                    a[len-1-i]='0';
                    n-=2;
                }
                else if(a[i]=='?' and n==0)
                {
                    a[i]='1';
                    a[len-1-i]='1';
                    m-=2;
                }
            }
        }
        if(flag==0) 
        {
            if(n==0 and m==0) cout<<a;
            else cout<<-1;
        }
        cout<<endl;
    }
}