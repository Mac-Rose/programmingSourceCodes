#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    
    cin>>n;
    
    string s;
    
    cin>>s;
    
    cin>>q;
    
    int l ,r ,k, typ, pos;
    
    while(q--){
        
        cin>>typ;
        
        if(typ==2){
            
            char c;
            
            cin>>pos;
            cin>>c;
            
            s[pos - 1]= c; 
        }
        
        else{
            
            string t;
            cin>> l>> r>> k;
            
            for(int i=l-1; i<r ; i++){
                
                t.push_back(s[i]);
            }
            
            
            sort(t.begin(),t.end());
            
            for(int i=0; i<k ;i++){
                
                cout<<t[i];
            }
            
            cout<<"\n";    
        }
        
    }
   return 0;
}