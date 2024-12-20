#include <bits/stdc++.h>
using namespace std;
#define tc() ll t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>bits(31,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                if(v[i]&(1<<j))
                bits[j]++;
            }
        }
        int maxi=*max_element(bits.begin(),bits.end());
        int mini=*min_element(bits.begin(),bits.end());

        if(mini==0 || maxi==0){
            cout<<n<<endl;
        }
        else{
            int maxi=-1;
            for(int i=0;i<31;i++){
                maxi=max(maxi, max(bits[i],n-bits[i]));
            }
            cout<<maxi<<endl;
        }
    }
}