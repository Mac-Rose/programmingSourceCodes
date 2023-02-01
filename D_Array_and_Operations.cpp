#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    vector<int> vo, ve;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            vo.push_back(i);
        }
        else
            ve.push_back(i);
    }

    // vo.assign(ve.begin(), ve.end());
    for (int i = 0; i < n; i++)
    {
        cout << vo[i] << " ";
    }
}