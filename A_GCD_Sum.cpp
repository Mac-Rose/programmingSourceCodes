#include<bits/stdc++.h>
using namespace std;


unsigned long long s;
unsigned long long extendedEuclid(unsigned long long A, int B) {
    
    if(B == 0) {
        s = A;
    }
    else {
        extendedEuclid(B, A%B);
    }
    return s;
}
int su(unsigned long long h)
{
        string a;
        a=to_string(h);
        int n=a.size();
        int s=0;
        int i=0;
        while(i!=n)
        {
            s+=a[i]-'0';
            i++;
        }
        return s;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tst;
    cin>>tst;
    while(tst--)
    {
        unsigned long long h;
        cin>>h;
        
        if (extendedEuclid(h,su(h))>1) cout<<h;
        else if(extendedEuclid(h+1,su(h+1))>1)  cout<<h+1;
        else cout<<h+2;
        cout<<"\n";
    }
}