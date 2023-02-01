#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<long long > s;
    for(int i=0;i<4;i++)
    {
        long long g;
        cin>>g;
        s.insert(g);
    }
    cout<<4-s.size();
    return 0;
}