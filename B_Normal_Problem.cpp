#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='p'){
                s[i]='q';
            }
            else if(s[i]=='q'){
                s[i]='p';
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}