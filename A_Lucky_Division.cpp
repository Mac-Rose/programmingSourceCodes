#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    int flag=0;
    vector<int> a{4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<a.size();i++)
    {
        if(tst%a[i]==0)
        {
            flag=1;
            cout<<"YES";
            break;
        }
    }
    if(flag==0) cout<<"NO";
    return 0;
}