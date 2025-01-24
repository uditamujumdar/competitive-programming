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
    map< tuple <ll , ll , ll> ,  ll >mp;
    map<pair<ll , pair< ll , ll> > , ll>j;
    ll ans = 0;
    for(int i = 0 ; i < n - 2 ; i++){
        mp[{0 , v[i + 1] , v[i + 2]}]++;
        mp[{v[i] , 0 , v[i + 2]}]++;
        mp[{v[i] , v[i + 1] , 0}]++;
        j[make_pair(v[i] , make_pair(v[i + 1] , v[i + 2]))]++;
    } 
    for(auto it : mp){
        ans += (it.second * (it.second - 1)) / 2;
    }
    for(auto it : j){
        ans -= 3 * (it.second * (it.second - 1)) / 2;
    }
    cout << max(ans , 0ll) << endl;
  }
}