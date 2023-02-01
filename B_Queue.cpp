#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

int solve(const vector<int> &A, int B)
{
    int n = A.size();
    int l = 0, r = n - 1, mid;
    //Find the peak element
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (A[mid + 1] < A[mid])
            r = mid - 1, n = mid;
        else
            l = mid + 1;
    }
    l = 0, r = n;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (A[mid] > B)
            r = mid - 1;
        else if (A[mid] < B)
            l = mid + 1;
        else
            break;
    }
    if (A[mid] == B)
        return mid;
    else
    {
        l = A.size() - 1, r = n;
        while (l > r)
        {
            mid = l - (l - r) / 2;
            if (A[mid] > B)
                r = mid + 1;
            else if (A[mid] < B)
                l = mid - 1;
            else
                break;
        }
        if (A[mid] == B)
            return mid;
        else
            return -1;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &it : A)
        cin >> it;
    int B;
    cin >> B;
    cout << solve(A, B);
}