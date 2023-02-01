#include <iostream>

signed main()
{
    ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int n, l, r;
    read_int(n, l, r);
    int mi = (n - l);
    mi += (1 << l) - 1;
    r--;
    int ma = (1 << r) - 1 + (n - r) * (1 << r);
    write_int(mi, ' ');
    write_int(ma);
}