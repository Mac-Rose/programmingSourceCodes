#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int h,m;
        cin>>h>>m;
        int y=0;
        y=60-m;
        h++;
        y+=(24-h)*60;
        cout<<y<<endl;
    }
    return 0;
}