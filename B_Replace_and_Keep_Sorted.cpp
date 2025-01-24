#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    int n,q,k;
    cin>>n>>q>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        int len=r-l;

        int ans = (v[r - 1] - v[l - 1]) - ((2 * len ) - (v[r - 1] - v[l - 1]));
        ans += (v[l-1] - 1)+(k - v[r-1]);
        
        cout<<ans<<endl;
    }
}