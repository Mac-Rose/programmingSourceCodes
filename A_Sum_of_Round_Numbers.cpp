#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int c0=0;
    while(tst--)
    {
        string a;
        cin>>a;
        int c0=count(a.begin(),a.end(),'0');
        cout<<a.size()-c0<<endl;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!='0') 
            {
                cout<<(a[i]-'0')*pow(10,a.size()-(i+1))<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}