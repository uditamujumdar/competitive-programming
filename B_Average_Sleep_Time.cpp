#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll nn=n-k+1;
    ll i=0, j=0;
    double ans=0.0;
    ll sum=0;
    while(j<n){
        sum+=v[j];
        if(j-i+1==k){
            ans+=sum;
            sum-=v[i];
            i++;
        }
        j++;
    }
    double avg=ans/nn;

    cout<<fixed<<setprecision(10)<<avg<<endl;
}