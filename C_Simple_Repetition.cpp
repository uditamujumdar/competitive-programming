#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

bool check(ll n){
    if(n==2 ||n==3)return true;
    if(n==0 || n==1)return false;
    if(n%2==0 || n%3==0)return false;

    for(ll i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main(){
    tc(){
        string x;
        ll k;
        cin>>x>>k;

            string y="";
            for(int i=0;i<k;i++){
                y+=x;
            }
            if(y.size()>18){
                cout<<"NO"<<endl;
                continue;
            }
            ll n=stoll(y);
            if(check(n)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
}