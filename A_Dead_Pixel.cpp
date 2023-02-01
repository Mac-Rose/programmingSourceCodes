#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        vector <int> v;
        v.push_back((a-x-1)*b);
        v.push_back((x)*b);
        v.push_back((b-y-1)*a);
        v.push_back((y)*a);
        sort(v.begin(),v.end());
        cout<<v[3]<<endl;
    }
    return 0;
}