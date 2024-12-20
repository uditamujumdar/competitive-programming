#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<=100;i++){
            for(int j=1;j<=100;j++){
                if(i+j==n){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}