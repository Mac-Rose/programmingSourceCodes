#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    vector<int> v;
    int count =0;
    while(tst--)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    
    auto m = max_element(v.begin(),v.end());
    int m1= m-v.begin()+1;
    auto x = min_element(v.rbegin(),v.rend());
    int x1= v.rend()-x;
    if(m1>x1)
    {
        count=m1-1;
        count+=x-v.rbegin()-1;
    }
    else
    {
        count=m1-1;
        count+=x-v.rbegin();
    }
    cout<<count;
    return 0;
}