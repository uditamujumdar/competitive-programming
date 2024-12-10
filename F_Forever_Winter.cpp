#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,m;
        cin>>n>>m;
        vector<int>adj[n+1];
        while(m--){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int x=0, y=0;
        int temp=-1;

        for(auto it: adj){
            if(it.size()==1){
                temp=it[0];
                y=adj[it[0]].size();
                break;
            }
        }

        for(auto it: adj[temp]){
            x=max(x, (int)adj[it].size());
        }

        cout<<x<<" "<<y-1<<endl;
    }
}