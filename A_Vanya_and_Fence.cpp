#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,su=0;
    cin>>n>>h;
    int v[n+1]={0};
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>h) su+=2;
        else su+=1;
    }
    cout<<su;
    return 0;
}