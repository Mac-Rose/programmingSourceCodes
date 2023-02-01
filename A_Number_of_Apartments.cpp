#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        vi v={1,2,4};
        cin>>n;
        int c5=0,c3=0,c7=0;
        if(find(v.begin(),v.end(),n)!=v.end()) 
        {
            cout<<-1<<endl;
            continue;
        }
        int last_digit=n%10;
        switch (last_digit)
        {
        case 0:
            c5=n/5;
            break;
        case 1:
            c5=(n-6)/5;
            c3=2;
            break;
        case 2:
            c5=(n-12)/5;
            c3=4;
            break;
        case 3:
            c5=(n-3)/5;
            c3=1;
            break;
        case 4:
            c5=(n-14)/5;
            c7=2;
            break;
        case 5:
            c5=n/5;
            break;
        case 6:
            c5=(n-6)/5;
            c3=2;
            break;
        case 7:
            c5=(n-7)/5;
            c7=1;
            break;
        case 8:
            c5=(n-3)/5;
            c3=1;
            break;
        case 9:
            c5=(n-9)/5;
            c3=3;
            break;
        }
        cout<<c3<<" "<<c5<<" "<<c7<<endl;
    }
}