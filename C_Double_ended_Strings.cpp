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
        string a,b;
        cin>>a>>b;
        int flag=1;
        if(a.size()>b.size()) 
        {
            
            for(int i=b.size();i>=0;i--)
            {
                if(flag==0) break;
                if(i==0) cout<<a.size()+b.size();
                else
                {
                    for(int j=0;j<=b.size()-i;j++)
                    {
                        if(a.find(b.substr(j,i))!=-1)
                        {
                            cout<<a.size()+b.size()-2*i;
                            flag=0;
                            break;
                        }
                    }
                }
                
            }
        }
        else
        {
            for(int i=a.size();i>=0;i--)
            {
                if(flag==0) break;
                if(i==0) cout<<b.size()+a.size();
                else
                {
                    for(int j=0;j<=a.size()-i;j++)
                    {
                        if(b.find(a.substr(j,i))!=-1)
                        {
                            cout<<a.size()+b.size()-2*i;
                            flag=0;
                            break;
                        }
                    }
                }
                
            }
        }
        cout<<endl;
    }
}