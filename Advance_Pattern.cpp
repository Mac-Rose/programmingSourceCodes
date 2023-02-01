/*#include<iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0,k=1;j<n;j++)
        {
            if(j<n-i-1) cout<<" ";
            else
            {
                cout<<k<<" ";
                k+=1;
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

//Palindromic Sequence

int main()
{
    int n;
    n=5;
    for(int i=0;i<n;i++)
    {
        for (int j=1,k=1;j<=2*n-1;j++)
        {
            if(j<n)
            {
                if(j<n-i) cout<<"   ";
                else 
                {
                    cout<<" "<<n-j+1<<" ";
                }
            }
            else
            {
                if(j>n+i) cout<<"   ";
                else 
                {
                    cout<<" "<<k<<" ";
                    k+=1;
                }
            }    
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int j=0;j<2*n;j++)
    {   
        if(j<n) 
        {for(int i=0;i<2*n;i++)
        {
            if(i<=n+j&&i>=n-j)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }}
        else
        {
            for(int i=0;i<2*n;i++)
        {
            if(i>-(n-j)&&i<3*n-j)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        }
        cout<<endl;
    }  
    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                if(j%4==2) cout<<" * ";
                else cout<<"   ";
            }
            if(i==1)
            {
                if(j%2!=0) cout<<" * ";
                else cout<<"   ";
            }
            else if(i==2)
            {
                if(j%4==0) cout<<" * ";
                else cout<<"   ";    
            }   
        }
        cout<<endl;
    }
    return 0;
}