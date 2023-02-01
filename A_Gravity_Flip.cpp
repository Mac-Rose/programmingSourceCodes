#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> k;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        k.push_back(g);
    }
    sort(k.begin(),k.end());
    for(auto l: k)
    {
        cout<<l<<" ";
    }
    return 0;
}