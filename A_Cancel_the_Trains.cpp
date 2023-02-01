#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    vector<int> v;
    int j;
    while(cin>>j && j!=cinTerminator)
    {
        v.push_back(j);
    }
    for (int i = 0; i < tst; i++)
    {
        cout<<v[i];
    }
    return 0;
}