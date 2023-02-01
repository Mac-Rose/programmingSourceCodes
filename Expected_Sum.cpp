ll binPow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ret = binPow(a, b / 2);
    if (b % 2 == 0)
        return (ret * ret) % MOD;
    return ((ret * ret) % MOD * a) % MOD;
}

ll inv(ll a)
{
    return (binPow(a, MOD - 2) % MOD + MOD) % MOD;
}