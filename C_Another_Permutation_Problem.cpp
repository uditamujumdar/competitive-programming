#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int f(vector<int>v, int k, int n){
    int i=n-k, j=n-1;
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    int ans=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        ans+=((i+1)*v[i]);
        maxi=max(maxi, (i+1)*v[i]);
    }
    return ans-maxi;
}

int main(){
    tc(){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans, f(v,i,n));
        }
        cout<<ans<<endl;
    }
}