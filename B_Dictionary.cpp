#include <bits/stdc++.h>
#include <random>
using namespace std;

#define e 1000000000
#define all(c) (c).begin(), (c).end()

unsigned long x = 123456789, y = 362436069, z = 521288629;

unsigned long xorshf96(void)
{ //period 2^96-1
    unsigned long t;
    x ^= x << 16;
    x ^= x >> 5;
    x ^= x << 1;

    t = x;
    x = y;
    y = z;
    z = t ^ x ^ y;

    return z;
}

signed main()
{
    srand(static_cast<unsigned int>(std::time(nullptr)));
    int testcase = rand() % 10 + 1;
    cout << testcase << endl;

    while (testcase--)
    {
        int n = rand() % 5 + 1;
        cout << n << ' ' << rand() % 10 + 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << char(rand() % (26) + 97);
        }
        cout << endl;
    }
}
