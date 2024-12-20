#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        map<ll,ll>mp;
        for(auto it: v){
            mp[it]++;
        }

        ll ans=0;
        for(auto it: mp){
            ll f=it.second;
            if(f>1){
                ans+=(f*(f-1))/2;
            }
        }
        ans+=mp[1]*mp[2];
        cout<<ans<<endl; 
    }
}