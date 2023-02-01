#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a; 
    for(int i=0;i<n;i++)
    {
        string b;
        cin>>b;
        a+=b;
    }
    int coutn=0;
    for(int i=1;i<2*n;i+=2)
    {
        if(a[i]==a[i+1]) coutn++;
    } 
    cout<<coutn+1;
    return 0;
}