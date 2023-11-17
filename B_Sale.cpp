#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
#include<map>
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
    int n,m;
    cin>>n>>m;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));

    int count=0;
    int ans=0;

    for(int i=0;i<n;i++){
        count++;

        if(count<=m && v[i]<=0){
            ans+=abs(v[i]);
        }
    }

    cout<<ans<<endl;
}