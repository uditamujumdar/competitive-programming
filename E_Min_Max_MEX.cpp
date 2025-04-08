#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

bool f(ll mid, vector<ll>&v, ll k){
    unordered_map<ll,ll>mp;
    ll mex=0;
    ll cnt=0;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
        while(mp[mex]>0){
            mex++;
        }
        if(mex>=mid){
            cnt++;
            mp.clear();
            mex=0;
        }
    }
    return cnt>=k;
}

int main(){
    tc(){
        int n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        ll maxi=*max_element(v.begin(), v.end());

        ll i=0, j=n;
        while(i<=j){
            ll mid=i+(j-i)/2;
            bool flag=f(mid, v, k);
            if(flag){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        cout<<j<<endl;
    }
}