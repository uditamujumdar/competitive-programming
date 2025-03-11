#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        ll n,k;
        cin>>n>>k;
        
        vector<ll>ans(n, 0);
        if(k&1){
            for(int i=0;i<n-1;i++){
                ans[i]=n;
            }
            ans[n-1]=n-1;
        }
        else{
            for(int i=0;i<n-1;i++){
                ans[i]=n-1;
            }
            ans[n-1]=n;
            swap(ans[n-1], ans[n-2]);
        }

        for(auto it: ans){
            cout<<it<<" "; 
        }
        cout<<endl;
    }
}