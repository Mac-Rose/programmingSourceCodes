#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int x=0;
    string a;
    while(tst--)
    {
        cin>>a;
        (a.find("++")!=-1)?x+=1:x-=1;
    }
    cout<<x;
    return 0;
}