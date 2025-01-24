#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        vector<int>ans(n*m, -1);
       
        for(int num=0;num<n*m;num++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(v[i][j]==num){
                        ans[num]=i;
                        break;
                    }
                }
                if(ans[num]!=-1){
                    break;
                }
            }
        }
        bool flag=true;
        
        vector<int>vis(n*m, 0);

        for(int i=0;i<n;i++){
            if(vis[ans[i]]==1){
                flag=false;
                break;
            }
            else{
                vis[ans[i]]=1;
            }
        }
        for(int i=0;i<n*m;i++){
            if(ans[i]!=ans[i%n]){
                flag=false;
                break;
            }
        }

        if(!flag){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i]+1<<" ";
            }
            cout<<endl;
        }
    }
}