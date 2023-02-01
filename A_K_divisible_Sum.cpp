#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int d=1;
    for(int i=1;i<n;i++)
    {
        d+=i;
        if(d%n==0)
        cout<<n<<" ";
        else
        cout<<d%n<<" ";
    }
    return 0;
}