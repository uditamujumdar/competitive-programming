#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

bool check(int n, int x, vector<int>&v){
    if(n==1){
        return v[0]==x;
    }
    double nn=n;

    double sum=accumulate(v.begin(), v.end(), 0.0);

    double mean=sum/nn;

    return mean==x;
}

int main(){
    tc(){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        if(check(n,x,v)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}