#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>a(n), b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        vector<int>v;
        bool flag=true;
        set<int>st;
        v.push_back(b[0]);
        st.insert(b[0]);
        for(int i=1;i<m;i++){
            if(v.back()!=b[i] && st.find(b[i])==st.end()){
                v.push_back(b[i]);
                st.insert(b[i]);
            }
        }
        int i=0;
        for(auto it: v){
            if(it!=a[i]){
                flag=false;
                break;
            }
            i++;
        }

        if(flag){
            cout<<"YA"<<endl;
        }
        else{
            cout<<"TIDAK"<<endl;
        }
    }
}