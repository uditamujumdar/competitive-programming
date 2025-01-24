#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int o=0, e=0;
        for(auto it: v){
            if(it&1)o++;
            else e++;
        }
        int ans=0;
        if(e>0){
            ans++;
            ans+=o;
        }
        else{
            ans+=(o-1);
        }
        cout<<ans<<endl;
    }
}