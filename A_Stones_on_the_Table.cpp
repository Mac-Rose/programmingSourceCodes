#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(((a[i]) ^ (a[i+1])) == 0) count++;
    }
    cout<<count;
    return 0;
}