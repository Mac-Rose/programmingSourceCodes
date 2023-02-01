#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int upper_bound(int target, vector<pair<int, int>> &temp)
{
    int l = 0, r = temp.size() - 1, ans;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (temp[mid].first > target)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (temp[mid].first == target)
        {
            ans = mid + 1;
            break;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int brokenCalc(int startValue, int target)
{
    int k = 0;
    int j = target;
    vector<pair<int, int>> temp;
    while (target >= startValue)
    {
        if (target & 1)
        {
            k++;
            target++;
            temp.push_back({target, k});
        }
        target /= 2;
        k++;
        temp.push_back({target, k});
    }

    int ans = INT64_MAX;
    int s = startValue;
    target = j;
    j = 0;
    sort(temp.begin(), temp.end());
    while (s < target)
    {
        int idx = upper_bound(s, temp);
        idx--;
        int temp1 = s - temp[idx].first + temp[idx].second + j;
        ans = min(ans, temp1);
        s *= 2;
        j++;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    cout << brokenCalc(a, b);
}