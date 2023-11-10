#include "header.h"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>v;
        int prdt=1;
        for(int i=0;i<n;i++){
            cin>>v[i];
            prdt*=v[i];
        }
        if(prdt%k==0){
            cout<<0<<endl;
        }

        else if(k==2){
            cout<<1<<endl;
        }
        else if(k==5){
            int mini=INT_MAX;
            for(int i=0;i<n;i++){
                
            }
        }
    }
}