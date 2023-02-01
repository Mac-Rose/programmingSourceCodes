#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    string a;
    cin>>a;
    for(int i=0;i<y;i++)
    {
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]=='B' and a[i+1]=='G') 
            {
                swap(a[i],a[i+1]); 
                i++;
            }
        }
    }
    cout<<a;
    return 0;
}