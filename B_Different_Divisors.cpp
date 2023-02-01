// C++ program to find number of integers with exactly 4 divisors

#include<bits/stdc++.h>
using namespace std;


void check_4_factors(int d)
{
    int count=0;
    int i;
    for (i = 6; count!=4; i++)
    {
        count=0;
        int j= 1;
        while(j<=sqrt(i) )
        {
            if(i%j==0) 
            {
                if(j!=sqrt(i)) count+=2;
                else count+=1;
                if(count >= 4) break;
                j+=d-1;
            }
            j++;
        }   
    }
    cout <<i-1<<"\n";
}

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int d;
        cin >> d;
        check_4_factors(d);
    }

    return 0;
}
