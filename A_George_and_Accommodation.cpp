#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int count=0;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        
        if (m-n>=2)
        {
            count++;
        }

    }
    cout<<count;
    return 0;
}