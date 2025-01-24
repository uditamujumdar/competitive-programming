#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        vector<int>v(4);
        for(int i=0;i<4;i++){
            cin>>v[i];
        }
        int maxi=0;
        int x=1, a3=v[0]+v[1];
        if(v[2]==a3+v[1]){
            x++;
        }
        if(v[3]==a3+v[2]){
            x++;
        }
        maxi=max(maxi, x);

        a3=v[2]-v[1];
        x=1;
        if(v[0]+v[1]==a3){
            x++;
        }
        if(v[3]==a3+v[2]){
            x++;
        }
        maxi=max(maxi, x);

        a3=v[3]-v[2];
        x=1;
        if(v[0]+v[1]==a3){
            x++;
        }
        if(v[2]==a3+v[1]){
            x++;
        }
        maxi=max(maxi, x);

        cout<<maxi<<endl;
    }
}