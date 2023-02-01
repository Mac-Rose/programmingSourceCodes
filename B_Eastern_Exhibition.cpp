#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int , int> p1, pair<int , int> p2) {
    return p1.second<p2.second;
}

bool compare1(pair<int , int> p1, pair<int , int> p2) {
    return p1.second>p2.second;
}

bool x(pair<int , int> p1, pair<int , int> p2) {
    return p1.first<p2.first;
}

bool x2(pair<int , int> p1, pair<int , int> p2) {
    return p1.first>p2.first;
}

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int count=0;
        set <pair<int , int>> s;
        
        int g,b;
        const auto p = max_element(s.begin(), s.end(), compare);
        const auto p1 = min_element(s.begin(), s.end(), compare1);
        const auto xx = max_element(s.begin(), s.end(), compare);
        const auto xx1 = min_element(s.begin(), s.end(), compare1);
        for(int i=p1->second;i<p->first;i++)
        {

            for(int j=xx1->second;j<xx->first;i++)
            {
                b=abs()
            }
        }
    }
    return 0;
}