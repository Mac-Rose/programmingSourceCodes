#include <bits/stdc++.h>
using namespace std;

int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ma=INT_MAX;
        vector<int> v;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x)
            {
                if(abs(points[i][1]-y)<ma )
                {
                    ma=abs(points[i][1]-y);
                    v.push_back(i);
                }
                
            }
            if(points[i][1]==y)
            {
                if(abs(points[i][0]-x)<ma )
                {
                    ma=abs(points[i][0]-x);
                    v.push_back(i);
                }
            }
        }
        auto it=v.end();
        it--;
        if(v.size()==0) return -1;
        else
        return *it;
}
#define pb push_back
#define MOD 1000000007
signed main()
{
	int x=3,y=4;
	vector<vector<int> > points;
	points.push_back({1,2});
	points.push_back({3,1});
	points.push_back({2,4});
	points.push_back({2,3});
	points.push_back({4,4});
	cout<<nearestValidPoint(3,4,points);
}