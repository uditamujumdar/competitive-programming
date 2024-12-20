#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int f(int ind, vector<int>&v, vector<int>&dp){
    if(ind>v.size()){
        return 1e9;
    }
    if(ind==v.size()){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int notpick=1+f(ind+1, v, dp);
    int pick=f(ind+v[ind]+1, v, dp);

    return dp[ind]=min(pick, notpick);
}

int main(){
    tc(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>dp(n+1,-1);
        cout<<f(0,v,dp)<<endl;
    }
}