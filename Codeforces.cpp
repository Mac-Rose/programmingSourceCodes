#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(auto element : v)
    {
        cout<<element<<" ";
    }
    v.pop_back();
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector <int> h;
    h.push_back(1);
    h.push_back(2);    
    h.push_back(3);    
    h.push_back(4);    
    vector<int>::iterator it;
    for(it= h.end()-1;it>=h.begin();it--)//To print in the reverse order Option 1
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
    for(auto t=h.rbegin();t !=h.rend();t++)

    {
        cout<<*t<<" ";
    }
    cout<<"\n"<<*h.begin();
    cout<<"\n"<<*h.end();
    
    cout<<"\n"<<*h.end()-1;
    cout<<"\n"<<*(h.end()-1);
   
    cout<<"\n"<<*h.rbegin();
    cout<<"\n"<<*h.rend()+1;

    cout<<"\n"<<*(h.rend()-1);
    return 0;
}