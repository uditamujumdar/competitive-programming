#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n=s.length();
    int l=0, cc=0, sn=0;

    for(auto it: s){
        if(it=='*')sn++; 
        else if(it=='?')cc++;
        else l++;
    }
    
    k-=l;
    string ans;
    for(auto i:s){
        if((i=='?' || i=='*') && k < 0 && !ans.empty()){
            ans.pop_back();
            k++;
        }
        
        while(i=='*' and k>0 and !ans.empty()){
            k--;
            ans.push_back(ans.back());
        }

        if(i!='*' && i!='?'){
            ans.push_back(i);
        }
    }

    if(k==0){
        cout<<ans<<endl;
    }
    else{
        cout<<"Impossible"<<endl;
    }
}