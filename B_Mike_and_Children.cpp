#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[v[i]+v[j]]++;
        }
    }
    int maxi=1;
    for(auto it: mp){
        maxi=max(maxi, it.second);
    }
    cout<<maxi<<endl;
}