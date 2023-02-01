#include <iostream>

#define int long long
signed main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int l, r;
    std::cin >> l >> r;
    std::cout << "YES\n";
    for (; l < r; l += 2)
    {
        std::cout << l << ' ' << l + 1 << '\n';
    }
}