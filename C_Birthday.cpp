#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>ans(n);
    sort(v.begin(), v.end());
    int ind=0;
    int i=0, j=n-1;
    while(i<j){
        ans[i]=v[ind];
        if(ind<n-1){
            ans[j]=v[ind+1];
        }
        i++;
        j--;
        ind+=2;
    }
    ans[i]=v[n-1];
    for(auto it: ans){
        cout<<it<<" ";
    }
}