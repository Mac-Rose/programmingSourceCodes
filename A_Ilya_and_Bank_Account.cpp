#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;
	int n=a.size();
	if(a[0]=='-')
	{
		if(a.size()>2) 
		{
			if(a.back()>a[n-2]) a.back()='$';
			else a[n-2]='$';
            if(a.substr(1,2)=="$0") cout<<0;
            else
			for(int i=0;i<n;i++)
			{

				if(a[i]!='$')cout<<a[i];
			}
		}
		else cout<<a;
	}
	else cout<<a;
	return 0;
}