#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>mp;
        for(auto it: v){
            mp[it]++;
        }

        int sc=0;
        for(int i=0;i<n;i++){
            int num=v[i];
            if(mp[num]>0){
                mp[num]--;
                if(mp[k-num]>0){
                    sc++;
                    mp[k-num]--;
                }
            }
        }
        cout<<sc<<endl;
    }
}