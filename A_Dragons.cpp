#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    vector< pair<int , int> > v;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int i=0;
    int flag=0;
    while(i<v.size())
    {
        if(v[i].first<s) s+=v[i].second;
        else
        {
            flag=1;
            break;
        }
        i++;
    }
    (flag==0) ? cout<<"YES" : cout<<"NO";
    return 0;
}