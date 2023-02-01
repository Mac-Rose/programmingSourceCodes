#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,k;
    
    cin>>n;
    
    long long occ[1001]={0};
    
    for(int i=0;i<n;i++){
        
        cin>>t;
        occ[t]++;
    }
    
    cin>>k;
    
    long long ans=0;
    
    for(int i=1;i<=1000;i++){
        
        for(int j=i+1;j<=1000;j++){
            
            if((i&j)^(i|j)>k){
                ans+=occ[i]*occ[j];
            }
        }
        
        if((i^i)>k)
        ans+=(occ[i]*(occ[i]-1))/2;
    }    
    
    cout<<ans;
   return 0;
}