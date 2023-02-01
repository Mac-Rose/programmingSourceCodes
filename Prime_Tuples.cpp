#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int MAX = 1000000;
    bool is_Prime[MAX + 1];
    int ans1[MAX + 1];
    //memset(is_prime,true,sizeof(is_prime));
    for (int i = 0; i <= MAX; i++)
        is_Prime[i] = true;
    for (int i = 0; i <= MAX; i++)
        ans1[i] = 0;
    is_Prime[0] = false;
    is_Prime[1] = false;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (is_Prime[i] == true)
        {
            for (int j = i * i; j <= MAX; j += i)
                is_Prime[j] = false;
        }
    }
    int ans = 0;
    for (int c = 5; c <= MAX; c++)
    {
        if (is_Prime[c] == true)
        {
            int b = c - 2;
            if (is_Prime[b] == true)
            {
                ans++;
                ans1[c] = ans;
            }
            else
                ans1[c] = ans;
        }
        else
            ans1[c] = ans;
    }
    // time complexity ->>O(Nlog(logN))
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            cout << "0" << endl;
        }
        else
        {

            cout << ans1[n] << endl;
        }
    }
    return 0;
}