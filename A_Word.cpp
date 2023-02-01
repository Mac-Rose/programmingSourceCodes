#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int s=0,l=0;
    getline(cin>>ws, a);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<97) l++;
        else s++;
    }
    if(s>=l) 
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<97) a[i]+=32;
        }
    }
    else 
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>=97) a[i]-=32;
        }
    }
    cout<<a;
    return 0;
}