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
        sort(v.begin(), v.end());
        if(n==1){
            if(v[0]>n) cout<<0<<endl;
            else cout<<1<<endl;
            continue;
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(v[i]!=v[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            if(v[n-1]>n){
                cout<<0<<endl;
            }
            else{
                cout<<n<<endl;
            }
            continue;
        }

        map<int,int>mp;
        map<int,int>mpv;
        for(auto it: v){
            mpv[it]++;
        }

        for(auto it: mpv){
            int x=1;
            while(it.first*x<=n){
                mp[it.first*x]+=it.second;
                x++;
            }
        }
        int maxi=0;
        for(auto it: mp){
            maxi=max(maxi, it.second);
        }
        cout<<maxi<<endl;
    }
}