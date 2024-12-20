#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int ans=min(a,m)+min(b,m);

        int first=m-min(m,a);
        int second=m-min(b,m);        
        
        if(c<=first){
            ans+=c;
            cout<<ans<<endl;
        }
        else{
            ans+=first;
            c-=first;
            ans+=min(second,c);
            cout<<ans<<endl;
        }
    }
}