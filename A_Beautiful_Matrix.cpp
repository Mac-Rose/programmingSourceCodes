#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    int flag=1;
    for(i=1;i<6;i++)
    {
        for( j=1;j<6;j++)
        {
            int c;
            cin>>c;
            if(c==1) 
            {
                flag=0;
                break;
            }
        }
        if(flag==0) break;
    }
    cout<<abs(3-i) + abs(3-j);
    return 0;
}