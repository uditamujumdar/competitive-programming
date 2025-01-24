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
        sort(v.begin(),v.end());
        map<int,int>mp;
        for(auto it: v){
            mp[it]++;
        }
        vector<int>temp;
        for(auto it: mp){
            if(it.second>=k){
                temp.push_back(it.first);
            }
        }
        if(temp.size()==0){
            cout<<-1<<endl;
        }
        else{
            int ar=temp[0], al=temp[0];
            int l=0;
            int maxi=0;
            for(int i=1;i<temp.size();i++){
                if(temp[i]==temp[i-1]+1){
                    if(i-l>maxi){
                        maxi=i-l;
                        ar=temp[i];
                        al=temp[l];
                    }
                }
                else{
                    l=i;
                }
            }
            cout<<al<<" "<<ar<<endl;
        }
    }
}