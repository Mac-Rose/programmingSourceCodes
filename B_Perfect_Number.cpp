#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,count=0;
    long long nl=0;
    cin>>n;
    int a=19;
    while(true)
    {   
        nl=0;
        string y=to_string(a);
        for(int i=0;i<y.size();i++)
        {
            nl+=(y[i]-48);
        }
        if(nl==10) count++;
        if(count == n) 
        {
            cout<<a;break;}
        else a++; 
    }
    return 0;
}