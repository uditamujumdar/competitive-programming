#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,k;
        cin>>n>>k;
        int cnt=1;
        vector<int>v(n,-1);
        for(int i=k-1;i<n;i+=k){
            v[i]=cnt;
            cnt++;
        }
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                v[i]=cnt;
                cnt++;
            }
        }
        for(auto it: v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}