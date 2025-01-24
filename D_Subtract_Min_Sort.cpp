#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

bool check(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    tc(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(check(v)){
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0;i<n-1;i++){
            int mini=min(v[i],v[i+1]);
            v[i]-=mini;
            v[i+1]-=mini;
            
        }
        // for(auto it: v){
        //     cout<<it<<" ";
        // }
        
        if(check(v)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}