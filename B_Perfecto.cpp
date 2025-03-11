#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

bool f(int x){
    int rt=sqrt(x);
    return rt*rt==x;
}

int main(){
    tc(){
        int n;
        cin>>n;
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        if(n==2){
            cout<<"2 1"<<endl;
            continue;
        }
        vector<int>v;
        map<int,int>mp;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            if(f(sum)){
                mp[i]=1;
                v.push_back(i);
            }
        }
        sort(v.rbegin(), v.rend());
        vector<int>ans;
        ans.push_back(2);
        for(auto it: v){
            if(it!=2)
            ans.push_back(it);
        }
        for(int i=1;i<=n;i++){
            if(i!=2 && mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        for(auto it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}