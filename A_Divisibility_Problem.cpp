#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int cost=0;
    string a, b;
    getline(cin>>ws,a);
    getline(cin>>ws,b);
    int i=0;
    while(i<n)
    {
        if(a[i]==b[i]) ;
        else
        {
            if(a[i+1]!=b[i+1])
            {
                cost+=1;
                i+=2;
                continue;
            }
            else
            {
                cost+=1;
            }
        }
        i+=1;
    }
    cout<<cost;
    return 0;
}