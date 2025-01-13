#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        ll n;
        cin>>n;
        vector<ll>a(n), b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        bool flag=true;
        ll temp=0;
        ll mini=1e9;
        for(int i=0;i<n;i++){
            if(b[i]>a[i]){
                if(temp>0){
                    flag=false;
                    break;
                }
                else{
                    temp+=(b[i]-a[i]);
                }
            }
            else{
                mini=min(mini, a[i]-b[i]);
            }
        }

        if(!flag || mini<temp){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}