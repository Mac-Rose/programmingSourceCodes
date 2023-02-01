//New Pattern design
#include<iostream>
using namespace std;

int main()
{
    int no=10;
    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=no;j++)
        {
            if(j>=i) cout<<"* ";
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;   
}