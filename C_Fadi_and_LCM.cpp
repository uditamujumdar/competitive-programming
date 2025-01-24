#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

ll lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
}

int main(){
    ll x;
    cin>>x;
    ll mini=LLONG_MAX;
    ll ans1=0, ans2=0;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            ll j=x/i;
            if(lcm(i,j)==x){
                if(mini>max(i,j)){
                    mini=max(i,j);
                    ans1=i;
                    ans2=j;
                }
            }
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
}