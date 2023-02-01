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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;

        if (count(all(v), -1) == count(all(v), 1))
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << i + 1 << ' ' << i + 1 << endl;
            continue;
        }
        int temp = 1;
        int parity = 1;
        if (v.front() == -1)
            parity = 0;
        int pos = 0, neg = 0, posPair = 0, negPair = 0;
        vector<pii> posSeg, negSeg;
        vi posSing, negSing;
        int start = 0;
        vector<pii> ans;

        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                if (temp & 1)
                {
                    if (parity == 1)
                        pos += 1, posSing.pb(i - 1);
                    else
                        neg += 1, negSing.pb(i - 1);
                }
                if (parity == 1)
                {

                    if (temp & 1)
                    {
                        if (temp > 1)
                            posSeg.push_back({start, i - 2});
                    }
                    else
                        posSeg.push_back({start, i - 1});
                    temp--;
                    posPair += temp;
                }
                else
                {
                    if (temp & 1)
                    {
                        if (temp > 1)
                            negSeg.push_back({start, i - 2});
                    }
                    else
                        negSeg.push_back({start, i - 1});
                    temp--;
                    negPair += temp;
                }
                parity = 1 - parity;
                temp = 1;
                start = i;
            }
            else
                temp++;
        }
        if (temp & 1)
        {
            if (parity == 1)
                pos += 1, posSing.pb(n - 1);
            else
                neg += 1, negSing.pb(n - 1);
        }
        if (parity == 1)
        {

            if (temp & 1)
            {
                if (temp > 1)
                    posSeg.push_back({start, n - 2});
            }
            else
                posSeg.push_back({start, n - 1});
            temp--;
            posPair += temp;
        }
        else
        {
            if (temp & 1)
            {
                if (temp > 1)
                    negSeg.push_back({start, n - 2});
            }
            else
                negSeg.push_back({start, n - 1});
            temp--;
            negPair += temp;
        }
        if (pos > neg)
        {
            if ((pos - neg) & 1)
            {
                cout << -1 << endl;
            }
            else if (pos - neg > negPair)
            {
                cout << -1 << endl;
            }
            else
            {
                int i = 0;
                for (int m = 0; m < posSing.size(); m++)
                {
                    ans.push_back({posSing[m], posSing[m]});
                }
                for (int m = 0; m < negSing.size(); m++)
                {
                    ans.push_back({negSing[m], negSing[m]});
                }
                while (pos > neg)
                {
                    int size = negSeg[i].S - negSeg[i].F + 1;
                    if (size >= pos - neg)
                    {
                        i++;
                        pos -= size;
                        for (int k = negSeg[i].F; k <= negSeg[i].S; k++)
                            ans.push_back({k, k});
                    }
                    else
                    {
                        pos -= size;
                        ans.push_back({negSeg[i].F + size, negSeg[i++].S});
                        break;
                    }
                }
                while (i < negSeg.size())
                    ans.push_back({negSeg[i].F, negSeg[i++].S});
                int j = 0;
                while (j < posSeg.size())
                    ans.push_back({posSeg[i].F, posSeg[j++].S});
            }
        }
        else
        {
            if ((neg - pos) & 1)
            {
                cout << -1 << endl;
            }
            else if (neg - pos > posPair)
            {
                cout << -1 << endl;
            }
            else
            {
                int i = 0;
                for (int m = 0; m < posSing.size(); m++)
                {
                    ans.push_back({posSing[m], posSing[m]});
                }
                for (int m = 0; m < negSing.size(); m++)
                {
                    ans.push_back({negSing[m], negSing[m]});
                }
                while (neg > pos)
                {
                    int size = posSeg[i].S - posSeg[i].F + 1;
                    if (size >= neg - pos)
                    {
                        i++;
                        neg -= size;
                        for (int k = posSeg[i].F; k <= posSeg[i].S; k++)
                            ans.push_back({k, k});
                    }
                    else
                    {
                        pos -= size;
                        ans.push_back({posSeg[i].F + size, posSeg[i++].S});
                        break;
                    }
                }
                while (i < posSeg.size())
                    ans.push_back({posSeg[i].F, posSeg[i++].S});
                int j = 0;
                while (j < negSeg.size())
                    ans.push_back({negSeg[i].F, negSeg[j++].S});
            }
        }
        if (ans.size())
        {
            cout << ans.size() << endl;
            sort(all(ans));
            for (auto &it : ans)
                cout << it.F + 1 << ' ' << it.S + 1 << endl;
        }
    }
}