#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==2){
            cout<<"NO"<<endl;
            continue;
        }
        int pl=abs(b-a)-1;
        if(pl&1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}