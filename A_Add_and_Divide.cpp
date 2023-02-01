#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int a,b;
        vector<int> s;
        int k=1;
        int n=200;
        cin>>a>>b;
        s.push_back(10000000);
        for(int i=0;i<n;i++)
        {
            int m;
            for( m=1;m<n;m++)
            {
                if(a/(pow(b+i,m))<1) break;
            }
            if((i+m)>s[k-1] || (i+m)==1) 
            {
                if((i+m)==1) 
                {
                    cout<<1<<"\n";
                    break;
                }
                else
                {
                    cout<<s[k-1]<<"\n";
                    break;
                }
            }
            s.push_back(i+m);
            k++;
        }
    }
    return 0;
}