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

int main(){
    int t;
    cin>>t;
    while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
 
    if(y<=x)
    {
        cout<<x<<endl;
    }
    else{
        if(x+k>=y)
        {
            cout<<y<<endl;
        }
        else{
            cout<<2*y-(x+k)<<endl;
        }
    }
    }
}