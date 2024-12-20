#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        string s;
        cin>>s;
        int n=s.size();
        int z=0;
        for(auto it: s){
            if(it=='0')z++;
        }
        if(z==0){
            cout<<1<<" "<<1<<" "<<1<<" "<<n<<endl;
            continue;
        }
        if(z==n-1){
            cout<<1<<" "<<n<<" "<<1<<" "<<n-1<<endl;
            continue;
        }
        int lo=0, i;
        for(i=0;i<n;i++){
            if(s[i]=='1'){
                lo++;
            }
            else{
                break;
            }
        }
        int zer=0;
        for(int j=i;j<n;j++){
            if(s[j]=='0'){
                zer++;
            }
            else{
                break;
            }
        }
        cout<<1<<" "<<n<<" ";
        if(zer>lo){
            cout<<1<<" "<<n-lo<<endl;
        }
        else{
            cout<<lo-zer+1<<" "<<n-zer<<endl;
        }
    }
}