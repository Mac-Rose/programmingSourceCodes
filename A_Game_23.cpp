#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long count=0;
    if (b%a!=0) cout<<-1;
    else
    {
        long long s=b/a;
        while(s%2==0)
        {
            s/=2;
            count++;
        }
        while(s%3==0)
        {
            s/=3;
            count++;
        }
        (s==1)? cout<<count : cout<<-1;
    }
    
    return 0;
}