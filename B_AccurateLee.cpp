#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        string a ;
        cin>>a;
        int first=-1,last=-1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]=='1') 
            {
                first=i;
                break;
            }
        }
        for(int i=n-1;i>-1;i--)
        {
            if(a[i]=='0') 
            {
                last=i;
                break;
            }
        }
        if(first==-1 or last==-1) cout<<a;
        else if(first>last) cout<<a;
        else 
        {
            string ans;
            ans+=a.substr(0,first);
            ans+=a.substr(last,n-last);
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}