#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l=0,r=0;
    cin>>n;
    string a ;
    getline(cin>>ws, a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='L') l++;
        else r++;
        
    }
    cout<<l+r+1;
    return 0;
}