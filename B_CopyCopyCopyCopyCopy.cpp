#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        set <int> s;
        for (int it=0;it<n;it++)
        {
            int j;
            cin>>j;
            s.insert(j);
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}