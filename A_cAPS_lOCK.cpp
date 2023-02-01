#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int flag=1;
    if(a[0]>96)
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>96) 
            {
                cout<<a;
                flag=0;
                break;
            }
        }
        if(flag==1) 
        {
            cout<<char(a[0]-32);
            for(int i=1;i<a.size();i++)
            {
                cout<<char(a[i]+32);
            }
        }
    }
    else
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>96) 
            {
                cout<<a;
                flag=0;
                break;
            }
        }
        if(flag==1) 
        {
            for(int i=0;i<a.size();i++)
            {
                cout<<char(a[i]+32);
            }
        }
    }
    
    return 0;
}