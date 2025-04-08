#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        string n;
        cin>>n;
        if(n.size()==1){
            cout<<0<<endl;
            continue;
        }
        ll cnt=0, non=0, zer=0;
        ll ans=0;
        string temp=n;
        ll i=0;
        for(i=temp.size()-1;i>=0;i--){
            if(temp[i]=='0'){
                cnt++;
            }
            else{
                ans+=cnt;
                break;
            }
        }
        for(ll j=i-1;j>=0;j--){
            if(temp[j]=='0'){
                continue;
            }
            else{
                ans++;
            }
        }
    
        cout<<ans<<endl;
    }
}