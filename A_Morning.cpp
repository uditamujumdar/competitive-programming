#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>v(4);
        for(int i=0;i<4;i++){
            if(s[i]=='0'){
                v[i]=10;
            }else{
                v[i]=s[i]-'0';
            }
        }

        int ans=0;
        for(int i=0;i<4;i++){
            if(i==0){
                int x=v[i];
                ans+=x;
            }
            else{
                int x=abs(v[i]-v[i-1])+1;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
}