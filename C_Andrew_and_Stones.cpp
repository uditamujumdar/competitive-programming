#include <bits/stdc++.h>
using namespace std;
#define tc() ll t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==3 && v[1]&1){
            cout<<-1<<endl;
            continue;
        }
        ll e=0;
        for(ll i=1;i<n-1;i++){
            if(v[i]%2==0)e++;
        }
        ll ans=0;
        bool flag=false;
        for(ll i=1;i<n-1;i++){
            if(v[i]>1){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
            continue;
        }
        for(ll i=1;i<n-1;i++){
            ans+=(v[i]+1)/2;
        }
        cout<<ans<<endl;
    }
}