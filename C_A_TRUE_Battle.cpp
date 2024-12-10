#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0;
        for(auto it: s){
            if(it=='0')z++;
        }

        bool flag=false;
        for(int i=1;i<n-1;i++){
            if(s[i]=='1'){
                if(s[i+1]=='1' || s[i-1]=='1'){
                    flag=true;
                    break;
                }
            }
        }
        if(s[0]=='1'||s.back()=='1'){
            flag=true;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}