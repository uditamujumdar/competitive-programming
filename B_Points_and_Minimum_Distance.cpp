#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define read(type) readInt<type>()
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
 
 
 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    n=n*2;
    vector<int>v(n);
 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    vector<int>x;
    vector<int>y;

    for(int i=0;i<n/2;i++){
        y.push_back(v[i]);
    }
    for(int i=n-1;i>=n/2;i--){
        x.push_back(v[i]);
    }

    long long ans=0;

    for(int i=0;i<n/2-1;i++){
        ans+= abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);
    }

    cout<<ans<<endl;

    for(int i=0;i<n/2;i++){
        cout<<x[i]<<" "<<y[i];
        cout<<endl;
    }
}

}
