//How to find the sum of largest continuous subarrays
/*#include<iostream>
using namespace std;

int main()
{
    //Kadane's Algorithm:- Brute Force
    int tst;
    cin>>tst;
    for(int h=0;h<tst;h++)
{    int no;
    cin>>no;
    int ar[no];
    for(int k=0;k<no;k++)
    {
        cin>>ar[k];
    }
    int max=ar[0];
    int finsr=0, finst=0;
    for(int i=0;i<no;i++)
    {
        int sum=0;
        for(int j=i;j<no;j++)
        {
            int start=i;
            int stop=j;
            sum+=ar[j];
        if(sum>max) 
        {
            max=sum;
            finsr=start;
            finst=stop;
        } 
        if (sum==max)
        {
            if(stop-start>finst-finsr)
            {
                max=sum;
                finsr=start;
                finst=stop;
            }
        }
        }
    }
    cout<<max<<endl;}
    return 0;
}*/
#include<iostream>
using namespace std;

int main()
{
    //Kadane's Algorithm:- Optimized
    int n=5;
    int sum=0, maxx;
    int ar[n]={1,2,3,-2,5};
    maxx=ar[0];
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
        if(ar[i]>sum)
        {
            sum=ar[i];
        }
        if(sum>maxx)
        {
            maxx=sum;
        }
    }
    cout<<maxx;
    sum=0;
    cout<<endl;
    return 0;
}