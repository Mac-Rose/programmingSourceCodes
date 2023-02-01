#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v; 
    for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.push_back(g);
        }
    for(int i=0;i<n;i++)
        {
            cout<<(find(v.begin(),v.end(),i+1)-v.begin())+1<<" ";
        }
    return 0;
}