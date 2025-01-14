#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    map<ll,ll>mp;
    for(auto it: v){
        mp[it%k]++;
    }
    ll cnt=0;
    
    for(ll i=0;i<n;i++){
        ll rem=v[i]%k;
        if(rem!=0 && rem!=(k-rem) && mp.find(rem)!=mp.end() && mp.find(k-rem)!=mp.end()){
            mp[k-rem]--;
            if(mp[k-rem]==0){
                mp.erase(k-rem);
            }
            mp[rem]--;
            if(mp[rem]==0){
                mp.erase(rem);
            }
            cnt+=2;
        }
        else if(rem==k-rem){
            if(mp.find(rem)!=mp.end() && mp[rem]>1){
                mp[rem]-=2;
                if(mp[rem]==0){
                    mp.erase(rem);
                }
                cnt+=2;
            }
        }
        else if(rem==0){
            if(mp.find(rem)!=mp.end() && mp[rem]>1){
                mp[rem]-=2;
                if(mp[rem]==0){
                    mp.erase(rem);
                }
                cnt+=2;
            }
        }
    }
    cout<<cnt<<endl;
}