#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

vector<int> freq(10,0);           //This will store the frequency of a digit in the number
map <int , int> memo;                   //This will used for memoization

void incre (vector <int> &freq)
{
    int temp=freq[9];
    freq.insert(freq.begin(),temp);
    freq.pop_back();
    freq[1]=(freq[1]%MOD + temp%MOD)%MOD;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freq[0]=1;

    memo[0]=1;
    for(int i=1;i<=200009;i++)
    {
        memo[i]=(memo[i-1] + freq[9])%MOD;      //The no of digit 9 + currently available digit after m-1 operation
        incre(freq);
    }

    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
    
        vector<int> digit;              //This will contain the digits of n
        while(n!=0)
        {
            digit.emplace_back(n%10);
            n/=10;
        }

        long long ans=0;
        for(auto it:digit )
        {
            ans=(ans + memo[it+m] )%MOD;
        }
        cout<<ans<<"\n";
    }
}