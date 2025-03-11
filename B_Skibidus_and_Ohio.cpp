#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<s.length()<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}