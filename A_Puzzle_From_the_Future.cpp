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
        string a;
        vector<int> b, d;
        getline(cin>>ws,a);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                d.push_back(1+(int(a[0])-1));
                b.push_back(1);
            }   
            else
            {
                if((int(a[i])-1)+1==d[i-1])
                {
                    b.push_back(0);
                    d.push_back((int(a[i])-1)+b[i]);
                }
                else
                {
                    b.push_back(1);
                    d.push_back((int(a[i])-1)+b[i]);
                } 
            }
        }
        for(auto element : b)
        {
            cout<<element;
        }
        cout<<"\n";
    }
    return 0;
}